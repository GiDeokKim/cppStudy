// �����ڿ��� ù ����
// ���ͷ�(Literal)
// �ǿ�����(Operand)
// ����(Unary) ����(Binary) ����(Ternary)

#include <iostream>

using namespace std;

int main()
{
	// Assignment operator =
	int x = 2; // x is a variable, 2 is a literal.
	
	cout << 1 + 2 << endl; // 1 and 2 are literal.

	// Unary operator -
	cout << -x << endl;

	// Binary operator +
	cout << 1 + 2 << endl;

	// Ternary operator ? :
	int y = (x > 0) ? 1 : 2;
	cout << y << endl;

	return 0;
}