// 유도 클래스에서 출력 연산자 사용하기
#include <iostream>

class Base
{
public:
	Base()
	{}

	// friend ft는 멤버가 아님
	friend std::ostream& operator << (std::ostream& out, const Base& b)
	{
		return b.print(out);
	}

	virtual std::ostream& print(std::ostream& out) const
	{
		out << "Base";
		return out;
	}
};

class Derived : public Base
{
public:
	Derived()
	{}

	virtual std::ostream& print(std::ostream& out) const override
	{
		out << "Derived";
		return out;
	}
};

int main()
{
	Base b;
	std::cout << b << std::endl;

	Derived d;
	std::cout << d << std::endl;

	Base& bref = d;
	std::cout << bref << std::endl;

	return 0;
}