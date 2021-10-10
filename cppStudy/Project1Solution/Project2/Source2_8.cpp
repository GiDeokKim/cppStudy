// ���ͷ� ��� Literal Constants
// c++ 14 Binary Literals�� �߰�

#include <iostream>

int main()
{
	using namespace std;

	// ���ڳ� ���ڷ� ǥ��Ǵ� r-value = literals
	float pi = 3.14f;

	unsigned int n = 5u;
	long n2 = 5L;

	// Decimal	: 0 1 2 3 4 5 6 7 8 9 10
	// Octal	: 0 1 2 3 4 5 6 7 10
	// Hexa		: 0 1 2 3 4 5 6 7 8 9 A B C D E F 10

	int x = 0xF;
	cout << x << endl;
	x = 012;
	cout << x << endl;
	x = 0b1010;
	cout << x << endl;
	x = 0b1011'1111'1010; // �����Ϸ��� '�� �����Ѵ�. 10�������� ��밡���ϴ�.
	cout << x << endl;

	int num_items = 123;
	int price = num_items * 10; // 10 is .... �ϵ��ڵ����� ���� ����� �ͺ��ٴ� �ɺ��� ����� ���°� �� ����

	return 0;
}