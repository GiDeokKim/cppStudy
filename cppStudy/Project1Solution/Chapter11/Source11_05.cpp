#include <iostream>

class Base
{
public:
	int m_public;
protected:
	int m_protected;
private:
	int m_private;
};

class Derived : public Base
{
public:
	Derived()
	{
		m_public = 123;
		m_protected = 123;
		//m_private = 123;
	}
};

class Derived2 : protected Base
{
public:
	Derived2()
	{
		m_public = 123;
		m_protected = 123;
		//m_private = 123;
	}
};

class Derived3 : private Base
{
public:
	Derived3()
	{
		m_public = 123;
		m_protected = 123;
		//m_private = 123;
	}
};

class GrandDerived : public Derived3 // Base가 private라서 접근 불가능
{
public:
	GrandDerived()
	{
		//m_public = 123;
		//m_protected = 123;
		//m_private = 123;
	}
};

int main()
{
	Base base;

	base.m_public = 123;
	//base.m_protected = 123;
	//base.m_private = 123;

	Derived derived;
	derived.m_public = 1024;
	//derived.m_protected = 123;
	//derived.m_private = 123;

	Derived2 derived2;
	//derived2.m_public = 10;
	//derived2.m_protected = 10;
	//derived2.m_private = 10;

	return 0;
}