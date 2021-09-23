// ����� ������ �и�
// Declaration and Definition
// �����Ϸ��� ������� �д´�.

#include <iostream>

using namespace std;

// �Լ��� �ּ����� ������ ������ �ִ� �� : ������Ÿ��
// ����(Forward Declaration)
int add(int, int);
int subtract(int, int);
int multiply(int, int);

int main()
{
	cout << add(1, 2) << endl;
	cout << subtract(1, 2) << endl;

	return 0;
}

// ����(Definition)
int add(int a, int b)
{
	return a + b;
}

int subtract(int a, int b)
{
	return a - b;
}

int multiply(int a, int b)
{
	return a * b;
}