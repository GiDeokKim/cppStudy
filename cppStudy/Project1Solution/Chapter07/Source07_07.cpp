// �Լ� �����ε�
// Function Overloading
// return type�� �ٸ� ��쿡�� overloading�� �ȵȴ�.
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
void print(my_int x) {} // ������ �ȵ�

int main()
{
	// ����� add �Լ��� ������ �� �� �����Ǿ�� ��
	add(1, 2);
	add(3.0, 4.0);

	return 0;
}