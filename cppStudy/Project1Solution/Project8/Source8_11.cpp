// static 정적 멤버 함수

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
		: m_value(123)//, s_value(111) static 변수는 생성자에서 초기화가 불가능하다.
	{}

	static int getValue() // static 함수에서는 this를 쓸 수 없다. 인스턴스에 종속된 함수가 아니기 때문
	{
		//error C2355 : 'this' : can only be referenced inside non - static member functions or non - static data member initializers
		return /*this->*/s_value;
		// return m_value; // this를 못쓴다는건 인스턴스에 종속된 변수에 접근을 못한다는 의미가 된다.
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
	//cout << Something::s_value << endl; private 변수는 불가능
	cout << Something::getValue() << endl;

	Something s1, s2;
	cout << s1.getValue() << endl;

	//int (Something:: * fptr1)() = &s1.temp; // 함수는 인스턴스마다 만드는게 아니라 하나만 존재한다.
	int (Something:: * fptr1)() = &Something::temp;

	cout << (s2.*fptr1)() << endl;

	// 특정 인스턴스와 상관 없이 사용 가능
	int (* fptr2)() = &Something::getValue;

	cout << fptr2() << endl;

	return 0;
}