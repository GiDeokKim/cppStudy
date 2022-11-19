#include <iostream>

class Mother // generalized class
{
private:
	int m_i;

public:
	Mother(const int i_in)
		: m_i(i_in)
	{
		std::cout << "Mother constructor" << std::endl;
	}

	void setValue(const int i_in)
	{
		m_i = i_in;
	}

	int getValue()
	{
		return m_i;
	}
};

class Child : public Mother // derived class
{
private:
	double m_d;

public:
	Child(const int i_in, const double d_in) // Mother 积己磊何磐 积己
		:  Mother(i_in), m_d(d_in)
	{
		std::cout << "Child constructor" << std::endl;
	}

	void setValue(const double d_in)
	{
		m_d = d_in;
	}

	int getValue()
	{
		return m_d;
	}
};

class Daughter : public Mother
{

};

class Son : public Mother
{

};

int main()
{
	Mother mother(1024);
	//mother.setValue(1024);
	std::cout << mother.getValue() << std::endl;

	Child child(1024, 128);
	std::cout << child.Mother::getValue() << std::endl;
	std::cout << child.getValue() << std::endl;

	return 0;
}