// sizeof, 쉼표 연산자, 조건(부) 연산자
// sizeof, Comma Operator, Conditional Operator

#include <iostream>

int main()
{
	using namespace std;

	float floatNumber;

	// sizeof는 연산자이다.
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

	// price를 const로 쓰고싶다면?
	const int constPrice = (onSale == true) ? 10 : 100;
	// 조건이나 반환하는 값이 간단할 때만 사용하자.

	int bb = 5;
	// 삼항연산자의 반환값은 같은 자료형으로 쓰는걸 권장
	cout << ((bb % 2 == 0) ? "even" : "odd") << endl;

	return 0;
}