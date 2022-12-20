// 함수 오버로딩
// Function Overloading
// return type만 다른 경우에는 overloading이 안된다.
#include <iostream>
#include <string>

int addInt(int x, int y)
{
	return x + y;
}

int addDouble(double x, double y)
{
	return x + y;
}

// function overloading
int add(int x, int y)
{
	return x + y;
}

// function overloading
int add(double x, double y)
{
	return x + y;
}

void getRandom(int& x) {}
void getRandom(double& x) {}

typedef int my_int;
void print(int x) {}
void print(my_int x) {} // 컴파일 안됨

int main()
{
	// 사용할 add 함수는 컴파일 할 때 결정되어야 함
	add(1, 2);
	add(3.0, 4.0);

	return 0;
}