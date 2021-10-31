// sizeof, ��ǥ ������, ����(��) ������
// sizeof, Comma Operator, Conditional Operator

#include <iostream>

int main()
{
	using namespace std;

	float floatNumber;

	// sizeof�� �������̴�.
	cout << sizeof(float)		<< endl;
	cout << sizeof floatNumber	<< endl;

	// comma perator
	int number01 = 3, number02 = 10;
	int number03 = (++number01, ++number02);

	cout << number01 << " " << number02 << " " << number03 << endl;

	// conditional operator (arithmetic if)
	bool onSale = true;

	int price;

	if (onSale)
		price = 10;
	else
		price = 100;

	cout << price << endl;

	// price�� const�� ����ʹٸ�?
	const int constPrice = (onSale == true) ? 10 : 100;
	// �����̳� ��ȯ�ϴ� ���� ������ ���� �������.

	int bb = 5;
	// ���׿������� ��ȯ���� ���� �ڷ������� ���°� ����
	cout << ((bb % 2 == 0) ? "even" : "odd") << endl;

	return 0;
}