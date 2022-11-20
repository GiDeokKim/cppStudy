#include <iostream>

class Base
{
protected:
	int m_value;

public:
	Base(int value)
		: m_value(value)
	{}


};

class Derived : public Base
{
public:
	Derived(int value)
		: Base(value)
	{}

	void setValue(int value)
	{
		Base::m_value = value;
		// Derived에 존재하는 variables도 같이 이용된다면 
		// performance에 따라 이처럼 구현하는게 나을 수 있으나
		// 보통은 Base에 정의되는게 맞다.
	}
};

int main()
{
	return 0;
}