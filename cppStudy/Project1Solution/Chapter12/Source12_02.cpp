#include <iostream>

class A
{
public: // virtual 키워드의 성능적 이슈를 확인해봐야 한다.
	virtual void Print() // 가장 상위 클래스가 virtual이면 하위는 전부 virtual로 적용됨
	{
		std::cout << "A" << std::endl;
	}
};

class B : public A
{
public:
	/*virtual*/ void Print() // 보통 virtual 함수를 상속 받으면 virtual 키워드를 붙여준다.
	{
		std::cout << "B" << std::endl;
	}
};

class C : public B
{
public:
	void Print()
	{
		std::cout << "C" << std::endl;
	}
};

class D : public C
{
public:
	void Print()
	{
		std::cout << "D" << std::endl;
	}
};

int main()
{
	A a;
	a.Print();

	B b;
	b.Print();

	C c;
	c.Print();

	D d;
	d.Print();

	A& ref = b;
	ref.Print();

	return 0;
}