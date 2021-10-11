// 산술 연산자
// arithmetic operators

#include <iostream>

int main()
{
	using namespace std;

	int x = 1;

	// 단항 연산자 +, -
	int y = -x;
	int z = +x;

	// 이항 연산자 +, -, *, /, %
	x = 7;
	y = 4;
	cout << x / y				<< endl;
	cout << float(x) / y		<< endl;
	cout << x / float(y)		<< endl;
	cout << float(x) / float(y) << endl;
	
	cout << -5 / 2 << endl; // c++ 11부터는 소수점 아래를 절삭하기로 했음
	cout << -5 % 2 << endl;
	cout << -5 % -2 << endl;
	cout << 5 % -2 << endl;

	// 코딩 작업 내용을 줄여준다.
	// 실수를 줄여준다. 보기가 편해진다.
	z += y;
	return 0;
}