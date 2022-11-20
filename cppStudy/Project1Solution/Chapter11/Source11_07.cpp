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

	friend std::ostream& operator << (std::ostream& out, const Base& b)
	{
		out << "This is base output" << std::endl;
		return out;
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

	void Print()
	{
		Base::Print();
		std::cout << "I'm derived" << std::endl;
	}

	friend std::ostream& operator << (std::ostream& out, const Derived& b)
	{
		std::cout << static_cast<Base>(b);
		out << "This is derived output" << std::endl;
		return out;
	}
};

int main()
{
	Base base(5);
	std::cout << base;
	base.Print();

	Derived derived(7);
	std::cout << derived;
	derived.Print();

	return 0;
}