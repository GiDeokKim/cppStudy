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
		// Derived�� �����ϴ� variables�� ���� �̿�ȴٸ� 
		// performance�� ���� ��ó�� �����ϴ°� ���� �� ������
		// ������ Base�� ���ǵǴ°� �´�.
	}
};

int main()
{
	return 0;
}