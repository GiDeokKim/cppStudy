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

	using Base::m_i; // Derived class���� public���� ����

private: // Derived���� Print�� ������ ����
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