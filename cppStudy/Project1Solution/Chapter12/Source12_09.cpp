#include <iostream>
#include <vector>
#include <functional>

class Base
{
public:
	int m_i = 0;

	virtual void print()
	{
		std::cout << "I'm Base" << std::endl;
	}
};

class Derived : public Base
{
public:
	int m_j = 1;

	virtual void print() override
	{
		std::cout << "I'm derived" << std::endl;
	}
};

void doSomething(Base& b) // Base b�� �ϸ� ���簡 �Ǹ鼭 object slicing �߻�
{
	b.print();
}

int main()
{
	//Derived d;
	//Base& b = d;

	//b.print();

	//// object slicing
	//Base b1 = d; // copy

	//b1.print(); // "I'm Base"

	Derived d;
	Base b;

	//std::vector<Base> my_vec; // object slicing
	//std::vector<Base&> my_vec; // error
	std::vector<std::reference_wrapper<Base>> my_vec; // std::vector<Base&>ó�� ��� ����
	my_vec.push_back(b);
	my_vec.push_back(d);

	for (const auto& ele : my_vec)
		ele.get().print();

	return 0;
}