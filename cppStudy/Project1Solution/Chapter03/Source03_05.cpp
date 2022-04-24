// 관계 연산자
// Relational Operators

#include <iostream>
#include <cmath>

int main()
{
	using namespace std;

	int x, y;
	cin >> x >> y;
	cout << "Your input values are : " << x << " " << y << endl;

	if (x == y)
		cout << "equal" << endl;

	if (x != y)
		cout << "not equal" << endl;

	if (x > y)
		cout << "x is greater than y" << endl;

	if (x < y)
		cout << "x is less than y" << endl;

	if (x >= y)
		cout << "x is greater than y or equal to y" << endl;

	if (x <= y)
		cout << "x is less than y or equal to y" << endl;

	// 부동소수점수에 대한 비교에서 문제가 생긴다.
	double d1(100 - 99.99);	// 0.001
	double d2(10 - 9.99);	// 0.001

	cout << d1 << " " << d2 << endl;
	cout << d1 - d2 << endl;

	const double epsilon = 1e-10;

	if (std::abs(d1 - d2) < epsilon)
		cout << "Approximately equal" << endl;
	/*if (d1 == d2)
		cout << "equal" << endl;*/
	else
	{
		cout << "not equal" << endl;
		if (d1 > d2)
			cout << "d1 > d2" << endl;
		else // d1 < d2 because d1 != d2
			cout << "d1 < d2" << endl;
	}

	return 0;
}