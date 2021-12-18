// 대입 연산자 오버로딩
// 깊은 복사(Deep Copy) vs 얕은 복사(Shallow Copy)

#include <cassert>
#include <iostream>

using namespace std;

/* 1. 잘못된 복사 예제(얕은 복사)
class MyString
{
//private:
public:	// 주소 찍어보려고 public으로 선언함
	char* m_data = nullptr;
	int m_length = 0;

public:
	MyString(const char* source = "")
	{
		assert(source);

		m_length = std::strlen(source) + 1;
		m_data = new char[m_length];

		for (int i = 0; i < m_length; ++i)
			m_data[i] = source[i];

		m_data[m_length - 1] = '\0';
	}

	~MyString()
	{
		delete[] m_data;
	}

	char* getString() { return m_data; }
	int getLength() { return m_length; }
};

int main()
{
	MyString hello("Hello");

	cout << (int*)hello.m_data << endl;
	cout << hello.getString() << endl;

	{
		MyString copy = hello; // 복사 생성자 호출
		cout << (int*)copy.m_data << endl;
		cout << copy.getString() << endl;
	} // 이 스코프를 지나가면서 copy에 담긴 hello 데이터가 사라짐

	cout << hello.getString() << endl;

	return 0;
}//*/

//* 2. 잘된 복사 예제(깊은 복사)
class MyString
{
	//private:
public:	// 주소 찍어보려고 public으로 선언함
	char* m_data = nullptr;
	int m_length = 0;

public:
	MyString(const char* source = "")
	{
		assert(source);

		m_length = std::strlen(source) + 1;
		m_data = new char[m_length];

		for (int i = 0; i < m_length; ++i)
			m_data[i] = source[i];

		m_data[m_length - 1] = '\0';
	}
	//MyString(const MyString& source) = delete; 내가 생성한거 아니면 막아버리기(차선책)
	MyString(const MyString& source) // 베스트
	{
		cout << "Copy constructor" << endl;

		m_length = source.m_length;

		if (source.m_data != nullptr)
		{
			m_data = new char[m_length];

			for (int i = 0; i < m_length; ++i)
				m_data[i] = source.m_data[i];
		}
		else //없어도 되긴함
			m_data = nullptr;
	}

	MyString& operator=(const MyString& source)
	{
		// shallow copy
		/*this->m_data = source.m_data;
		this->m_length = source.m_length;*/

		cout << "Assignment operator" << endl;

		if (this == &source) // prevent self-assignment
			return (*this);

		delete[] m_data;

		m_length = source.m_length;

		if (source.m_data != nullptr)
		{
			m_data = new char[m_length];

			for (int i = 0; i < m_length; ++i)
				m_data[i] = source.m_data[i];
		}
		else //없어도 되긴함
			m_data = nullptr;

		return (*this);
	}

	~MyString()
	{
		delete[] m_data;
	}

	char* getString() { return m_data; }
	int getLength() { return m_length; }
};

int main()
{
	MyString hello("Hello");

	cout << (int*)hello.m_data << endl;
	cout << hello.getString() << endl;

	{
		MyString copy = hello; // 복사 생성자 호출
		cout << (int*)copy.m_data << endl;
		cout << copy.getString() << endl;
	} // 이 스코프를 지나가면서 copy에 담긴 hello 데이터가 사라짐

	cout << hello.getString() << endl;

	//Copy
	MyString str1 = hello; // str1(hello)로 하면 생성자 호출로 보이니 이렇게 하자

	//Assignment
	MyString str2;
	str2 = hello;
	//str2(hello); 안되는 문법

	return 0;
}//*/