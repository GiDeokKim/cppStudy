#include <iostream>

class Base
{
public:
	//FunctionPointer* __vptr;
	virtual void fun1()
	{};
	virtual void fun2()
	{};
};

class Der : public Base
{
public:
	//FunctionPointer* __vptr;
	virtual void fun1()
	{};
	virtual void fun3()
	{};
};

int main()
{
	// virtual Ű���忡 ���� ũ�� �ٸ�
	std::cout << sizeof(Base) << std::endl;
	std::cout << sizeof(Der) << std::endl;
}