// ���� ������
// increment decrement operators

#include <iostream>

int add(int a, int b)
{
	return a + b;
}

int main()
{
	using namespace std;

	int number = 5;
	int prefixDecrementNumber	= --number;
	int postfixDecrementNumber	= number--;

	cout << prefixDecrementNumber	<< endl;
	cout << postfixDecrementNumber	<< endl;

	int number01 = 6;
	int number02 = 6;
	cout << number01	<< " " << number02		<< endl;
	cout << ++number01	<< " " << --number02	<< endl;
	cout << number01++	<< " " << number02--	<< endl; // number01�� ��Ʈ������ ���� �ڿ� 1�� �����ش�.
	cout << number01	<< " " << number02		<< endl;

	int number03 = 1;
	int number04 = 2;
	int addNumber = add(number03, ++number03);

	cout << addNumber << endl;
	addNumber = add(number03, ++number04);
	cout << addNumber << endl;

	return 0;
}