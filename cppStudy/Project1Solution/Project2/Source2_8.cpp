// ���ͷ� ��� Literal Constants
// c++ 14 Binary Literals�� �߰�

// Decimal	: 0 1 2 3 4 5 6 7 8 9 10
// Octal	: 0 1 2 3 4 5 6 7 10
// Hexa		: 0 1 2 3 4 5 6 7 8 9 A B C D E F 10

#include <iostream>

int main()
{
	using namespace std;

	// ���ڳ� ���ڷ� ǥ��Ǵ� r-value = literals
	float pi = 3.14f;

	unsigned int n = 5u;
	long n2 = 5L;

	int x = 0xF;
	cout << x << endl;
	x = 012;
	cout << x << endl;
	x = 0b1010;
	cout << x << endl;
	x = 0b1011'1111'1010; // �����Ϸ��� '�� �����Ѵ�. 10�������� ��밡���ϴ�.
	cout << x << endl;

	return 0;
}