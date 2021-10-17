// 리터럴 상수 Literal Constants
// c++ 14 Binary Literals도 추가

// Decimal	: 0 1 2 3 4 5 6 7 8 9 10
// Octal	: 0 1 2 3 4 5 6 7 10
// Hexa		: 0 1 2 3 4 5 6 7 8 9 A B C D E F 10

#include <iostream>

int main()
{
	using namespace std;

	// 숫자나 글자로 표기되는 r-value = literals
	float pi = 3.14f;

	unsigned int n = 5u;
	long n2 = 5L;

	int x = 0xF;
	cout << x << endl;
	x = 012;
	cout << x << endl;
	x = 0b1010;
	cout << x << endl;
	x = 0b1011'1111'1010; // 컴파일러는 '를 무시한다. 10진수에도 사용가능하다.
	cout << x << endl;

	return 0;
}