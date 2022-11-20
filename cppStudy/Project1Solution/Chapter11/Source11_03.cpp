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
	Child() // Mother�� ������ ������� ���� ������
		: Mother(1024), m_d(1.0)//, m_i(1024) //�����ڿ��� �ʱ�ȭ�Ϸ��ϸ� �ȵȴ�.
	{
		std::cout << "Child construction " << std::endl;
		// ������ ��� ������ public�̸� �Ʒ��� ���� ������� ������ �����ϴ�.
		/*m_i - 10;
		this->m_i = 11;
		this->Mother::m_i = 12;*/
	}
	// �θ� �ִ� ��� ������ initialize list������ �ʱ�ȭ �Ұ���
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