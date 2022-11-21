#include <iostream>

class Base
{
public:
	virtual ~Base()
	{
		std::cout << "~Base()" << std::endl;
	}
};

class Derived : public Base
{
private:
	int* m_array;

public:
	Derived(int length)
	{
		m_array = new int[length];
	}

	// �θ� Ŭ������ virtual Ű���� ������ �ڽ� Ŭ���������� ���̴°� ����.
	/*virtual*/ ~Derived() //override // ~Base�� virtual Ű���尡 ������ override Ű���带 ���� �� �ִ�.
	{
		std::cout << "~Derived()" << std::endl;
		delete[] m_array;
	}
};

int main()
{
	//Derived derived(5);

	Derived* derived = new Derived(5);
	Base* base = derived;
	delete base; // Base�� �Ҹ��ڰ� virtual�� �ƴ϶�� memory leak �߻�

	return 0;
}