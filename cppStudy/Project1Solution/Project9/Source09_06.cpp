// ÷�� ������ �����ε� �ϱ�
// [] subscript operators

#include <iostream>
#include <cassert>

using namespace std;

/* 1. �Ϲ����� ����
class IntList
{
private:
	// 10���� �޸𸮰� �׻� Ȯ���� �Ǵ� Ŭ����
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

/* 2. ÷�� ������ �����ε�
class IntList
{
private:
	// 10���� �޸𸮰� �׻� Ȯ���� �Ǵ� Ŭ����
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
	
	// �̺κ��� ���ؼ� int&�� ������ �����ε��� ������.
	my_list[3] = 10;

	cout << my_list[3] << endl;

	return 0;
}//*/

//* 3. const�� ���� ��ü�� ���
class IntList
{
private:
	// 10���� �޸𸮰� �׻� Ȯ���� �Ǵ� Ŭ����
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