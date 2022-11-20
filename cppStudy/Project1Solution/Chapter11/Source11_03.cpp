#include <iostream>

class Mother
{
public:
	int m_i;

	Mother(const int i_in = 0)
		: m_i(i_in)
	{
		std::cout << "Mother construction " << std::endl;
	}
};

class Child : public Mother
{
public:
	double m_d;
public:
	Child() // Mother의 순서는 상관없이 먼저 생성됨
		: Mother(1024), m_d(1.0)//, m_i(1024) //생성자에서 초기화하려하면 안된다.
	{
		std::cout << "Child construction " << std::endl;
		// 하지만 멤버 변수가 public이면 아래와 같은 방법으로 접근이 가능하다.
		/*m_i - 10;
		this->m_i = 11;
		this->Mother::m_i = 12;*/
	}
	// 부모에 있는 멤버 변수는 initialize list에서는 초기화 불가능
};

class A
{
public:
	A()
	{
		std::cout << "A constructor" << std::endl;
	}
};

class B : public A
{
public:
	B()
	{
		std::cout << "B constructor" << std::endl;
	}
};

class C : public B
{
public:
	C()
	{
		std::cout << "C constructor" << std::endl;
	}
};

int main()
{
	//Child c1;
	C c;

	return 0;
}