// ���� ������ �����ε�
// ���� ����(Deep Copy) vs ���� ����(Shallow Copy)

#include <cassert>
#include <iostream>

using namespace std;

/* 1. �߸��� ���� ����(���� ����)
class MyString
{
//private:
public:	// �ּ� ������ public���� ������
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
		MyString copy = hello; // ���� ������ ȣ��
		cout << (int*)copy.m_data << endl;
		cout << copy.getString() << endl;
	} // �� �������� �������鼭 copy�� ��� hello �����Ͱ� �����

	cout << hello.getString() << endl;

	return 0;
}//*/

//* 2. �ߵ� ���� ����(���� ����)
class MyString
{
	//private:
public:	// �ּ� ������ public���� ������
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
	//MyString(const MyString& source) = delete; ���� �����Ѱ� �ƴϸ� ���ƹ�����(����å)
	MyString(const MyString& source) // ����Ʈ
	{
		cout << "Copy constructor" << endl;

		m_length = source.m_length;

		if (source.m_data != nullptr)
		{
			m_data = new char[m_length];

			for (int i = 0; i < m_length; ++i)
				m_data[i] = source.m_data[i];
		}
		else //��� �Ǳ���
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
		else //��� �Ǳ���
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
		MyString copy = hello; // ���� ������ ȣ��
		cout << (int*)copy.m_data << endl;
		cout << copy.getString() << endl;
	} // �� �������� �������鼭 copy�� ��� hello �����Ͱ� �����

	cout << hello.getString() << endl;

	//Copy
	MyString str1 = hello; // str1(hello)�� �ϸ� ������ ȣ��� ���̴� �̷��� ����

	//Assignment
	MyString str2;
	str2 = hello;
	//str2(hello); �ȵǴ� ����

	return 0;
}//*/