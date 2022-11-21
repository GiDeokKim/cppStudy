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

	// 부모 클래스에 virtual 키워드 붙으면 자식 클래스에서도 붙이는게 좋다.
	/*virtual*/ ~Derived() //override // ~Base에 virtual 키워드가 있으면 override 키워드를 넣을 수 있다.
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
	delete base; // Base의 소멸자가 virtual이 아니라면 memory leak 발생

	return 0;
}