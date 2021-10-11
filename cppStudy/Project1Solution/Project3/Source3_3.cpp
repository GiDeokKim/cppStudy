// 증감 연산자
// increment decrement operators

#include <iostream>

int add(int a, int b)
{
	return a + b;
}

int main()
{
	using namespace std;

	int x = 5;
	int y = --x;
	int z = x--;

	cout << y << endl;
	cout << z << endl;

	x = 6, y = 6;
	cout << x << " " << y << endl;
	//cout << ++x << " " << --y << endl;
	cout << x++ << " " << y-- << endl; // x를 스트림으로 보낸 뒤에 1을 더해준다.
	cout << x << " " << y << endl;

	x = 1;
	y = 2;
	int v = add(x, ++x);
	cout << v << endl;
	v = add(x, ++y);
	cout << v << endl;

	return 0;
}