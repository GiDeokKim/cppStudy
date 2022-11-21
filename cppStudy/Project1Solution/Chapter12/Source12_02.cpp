#include <iostream>

class A
{
public: // virtual Ű������ ������ �̽��� Ȯ���غ��� �Ѵ�.
	virtual void Print() // ���� ���� Ŭ������ virtual�̸� ������ ���� virtual�� �����
	{
		std::cout << "A" << std::endl;
	}
};

class B : public A
{
public:
	/*virtual*/ void Print() // ���� virtual �Լ��� ��� ������ virtual Ű���带 �ٿ��ش�.
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