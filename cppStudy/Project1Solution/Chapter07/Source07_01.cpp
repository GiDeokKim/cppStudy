#include <iostream>

int foo(int x, int y);

int foo(int x, int y) // x and y are parameters(매개변수)
{
	return x + y;
} // x and y are destroyed here

int main()
{
	int x = 1, y = 2;

	foo(6, 7); // 6 and 7 are argumets(인자 or actual parameters)
	foo(x, y + 1);

	return 0;
}