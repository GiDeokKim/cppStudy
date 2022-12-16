// Passing Arguments by Reference(Call by Reference)
// 참조에 의한 인수 전달
#include <iostream>
#include <cmath>

void addOne(int& y)
{
	std::cout << y << " " << &y << std::endl;
	y = y + 1;
}

void getSinCos(const double degree, double& sin_out, double& cos_out)
{
	static const double pi = 3.141592 / 180.0;
	const double radian = degree * pi;

	sin_out = std::sin(radian);
	cos_out = std::cos(radian);
}

void foo(int& x)
{
	std::cout << x << std::endl;
}

typedef int* pint;
void foo2(pint& ptr)
{
	std::cout << ptr << " " << &ptr << std::endl;
}

int main()
{
	int x = 5;
	std::cout << x << " " << &x << std::endl;

	addOne(x);
	std::cout << x << " " << &x << std::endl;

	double sin(0.0);
	double cos(0.0);

	getSinCos(30.0, sin, cos);

	std::cout << sin << " " << cos << std::endl;

	//foo(6) // error

	pint ptr = &x;
	foo2(ptr);

	return 0;
}