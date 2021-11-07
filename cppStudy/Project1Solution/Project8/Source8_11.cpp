// static ���� ��� �Լ�

#include <iostream>

using namespace std;

class Something
{
public:

	class _init
	{
	public:
		_init()
		{
			s_value = 4321;
		}
	};

private:
	static int s_value;
	int m_value;

	static _init s_initializer;

public:

	Something()
		: m_value(123)//, s_value(111) static ������ �����ڿ��� �ʱ�ȭ�� �Ұ����ϴ�.
	{}

	static int getValue() // static �Լ������� this�� �� �� ����. �ν��Ͻ��� ���ӵ� �Լ��� �ƴϱ� ����
	{
		//error C2355 : 'this' : can only be referenced inside non - static member functions or non - static data member initializers
		return /*this->*/s_value;
		// return m_value; // this�� �����ٴ°� �ν��Ͻ��� ���ӵ� ������ ������ ���Ѵٴ� �ǹ̰� �ȴ�.
	}

	int temp()
	{
		return this->s_value/* + this->m_value*/;
	}

};

int Something::s_value = 1024;
Something::_init Something::s_initializer;

int main()
{
	//cout << Something::s_value << endl; private ������ �Ұ���
	cout << Something::getValue() << endl;

	Something s1, s2;
	cout << s1.getValue() << endl;

	//int (Something:: * fptr1)() = &s1.temp; // �Լ��� �ν��Ͻ����� ����°� �ƴ϶� �ϳ��� �����Ѵ�.
	int (Something:: * fptr1)() = &Something::temp;

	cout << (s2.*fptr1)() << endl;

	// Ư�� �ν��Ͻ��� ��� ���� ��� ����
	int (* fptr2)() = &Something::getValue;

	cout << fptr2() << endl;

	return 0;
}