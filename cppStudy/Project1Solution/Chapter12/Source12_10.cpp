#include <iostream>
#include <string>

class Base
{
public:
	int m_i = 0;

	virtual void print()
	{
		std::cout << "I'm Base" << std::endl;
	}
};

class Derived1 : public Base
{
public:
	int m_j = 1024;

	virtual void print() override
	{
		std::cout << "I'm derived" << std::endl;
	}
};

class Derived2 : public Base
{
public:
	std::string m_name = "Dr. Two";

	virtual void print() override
	{
		std::cout << "I'm derived" << std::endl;
	}
};

int main()
{
	Derived1 d1;
	d1.m_j = 2048;
	Base* base = &d1;

	// d1�� access �Ұ����ϰ� �Ǿ����� ����

	auto* base_to_d1 = dynamic_cast<Derived1*>(base); // �ִ��� ���ؾ� �� ��Ȳ
	std::cout << base_to_d1->m_j << std::endl;

	auto* base_to_d2 = dynamic_cast<Derived2*>(base); // dynamic_cast�� casting�� �����ϸ� nullptr�� �ִ´�.
	// static_cast�� �ִ��� casting�� �Ϸ��� �õ��Ѵ�.
	if (base_to_d1 == nullptr)
		std::cout << "Failed" << std::endl;
	else
		std::cout << base_to_d2->m_name << std::endl;

	/*base_to_d1->m_j = 256;
	std::cout << d1.m_j << std::endl;*/

	return 0;
}