// 매개변수의 기본값
// Default Parameters
#include <iostream>

void print(int x = 0) // Default Parameter x = 0
{
	std::cout << x << std::endl;
}

int main()
{
	print(10);
	print();
	return 0;
}