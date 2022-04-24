// 연산자와의 첫 만남
// 리터럴(Literal)
// 피연산자(Operand)
// 단항(Unary) 이항(Binary) 삼항(Ternary)

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