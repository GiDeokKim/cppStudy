// sizeof, ��ǥ ������, ����(��) ������
// sizeof, Comma Operator, Conditional Operator

#include <iostream>

int main()
{
	using namespace std;

	float a;

	// sizeof�� �������̴�.
	cout << sizeof(float) << endl;
	cout << sizeof a << endl;

	// comma perator
	int x = 3;
	int y = 10;
	//int z = (++x, ++y);
	++x;
	++y;
	int z = y;

	cout << x << " " << y << " " << z << endl;

	int a = 1, b = 10;
	z = a, b;

	cout << z << endl;

	// conditional operator (arithmetic if)
	bool onSale = true;

	int price;

	if (onSale)
		price = 10;
	else
		price = 100;

	cout << price << endl;

	// price�� const�� ����ʹٸ�?
	const int price2 = (onSale == true) ? 10 : 100;
	// �����̳� ��ȯ�ϴ� ���� ������ ���� �������.

	int bb = 5;
	// ���׿������� ��ȯ���� ���� �ڷ������� ���°� ����
	cout << ((bb % 2 == 0) ? "even" : "odd") << endl;

	return 0;
}