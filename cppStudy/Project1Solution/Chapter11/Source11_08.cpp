#include <iostream>

class Base
{
protected:
	int m_i;

public:
	Base(int value)
		: m_i(value)
	{}

	void Print()
	{
		std::cout << "I'm base" << std::endl;
	}
};

class Derived : public Base
{
private:
	double m_d;

public:
	Derived(int value)
		: Base(value)
	{}

	using Base::m_i; // Derived class에서 public으로 변경

private: // Derived에서 Print를 못쓰게 막음
	//using Base::Print; // do not add ()
	void Print() = delete;
};

int main()
{
	Base base(5);
	base.Print();

	Derived derived(7);

	derived.m_i = 123;
	
	derived.Print();

	return 0;
}