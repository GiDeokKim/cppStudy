#include <iostream>

class A
{
public:
	virtual void Print(int x)
	{
		std::cout << "A" << std::endl;
	}

	virtual A* getThis()
	{
		std::cout << "A::getThis()" << std::endl;
		return this;
	}
};

class B : public A
{
public:
	// override 키워드로 컴파일 에러를 잡아낼 수 있다.
	//void Print(short x) override 
	//void Print2(int x) override
	//void Print(int x) const override
	void Print(int x) final override
	{
		std::cout << "B" << std::endl;
	}

	virtual B* getThis()
	{
		std::cout << "B::getThis()" << std::endl;
		return this;
	}
};

class C : public B
{
public:
	// final 키워드로 override를 막아버릴 수 있다.
	void Print(int x)
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
	B b;
	C c;

	A& ref = b;
	b.getThis()->Print(1);
	ref.getThis()->Print(1);

	std::cout << typeid(b.getThis()).name() << std::endl;
	std::cout << typeid(ref.getThis()).name() << std::endl;

	return 0;
}