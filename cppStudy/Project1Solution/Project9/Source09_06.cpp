// 첨자 연산자 오버로딩 하기
// [] subscript operators

#include <iostream>
#include <cassert>

using namespace std;

/* 1. 일반적인 구현
class IntList
{
private:
	// 10개의 메모리가 항상 확보가 되는 클래스
	int m_list[10];

public:
	void setItem(int index, int value)
	{
		m_list[index] = value;
	}

	int getItem(int index)
	{
		return m_list[index];
	}

	int* getList()
	{
		return m_list;
	}
};

int main()
{
	IntList my_list;

	my_list.setItem(3, 1);

	cout << my_list.getItem(3) << endl;

	my_list.getList()[3] = 10;

	cout << my_list.getList()[3] << endl;

	return 0;
}//*/

/* 2. 첨자 연산자 오버로딩
class IntList
{
private:
	// 10개의 메모리가 항상 확보가 되는 클래스
	int m_list[10];

public:
	int& operator [] (const int index)
	{
		assert(index >= 0);
		assert(index < 10);

		return m_list[index];
	}
};

int main()
{
	IntList my_list;
	
	// 이부분을 위해서 int&로 연산자 오버로딩이 구현됨.
	my_list[3] = 10;

	cout << my_list[3] << endl;

	return 0;
}//*/

//* 3. const가 붙은 객체의 경우
class IntList
{
private:
	// 10개의 메모리가 항상 확보가 되는 클래스
	int m_list[10] = { 0,1,2,3,4,5,6,7,8,9 };

public:
	int& operator [] (const int index)
	{
		assert(index >= 0);
		assert(index < 10);

		return m_list[index];
	}

	const int& operator [] (const int index) const 
	{
		assert(index >= 0);
		assert(index < 10);

		return m_list[index];
	}
};

int main()
{
	const IntList my_list;

	cout << my_list[3] << endl;

	IntList* list = new IntList;

	//IntList test;
	//list[3] = test;
	//list[3] = 10; // not ok
	(*list)[3] = 10; //ok
	return 0;
}//*/