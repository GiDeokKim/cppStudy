// 선언과 정의의 분리
// Declaration and Definition
// 컴파일러는 순서대로 읽는다.

#include <iostream>

using namespace std;

// 함수의 최소한의 정보를 가지고 있는 것 : 프로토타입
// 선언(Forward Declaration)
int add(int, int);
int subtract(int, int);
int multiply(int, int);

int main()
{
	cout << add(1, 2) << endl;
	cout << subtract(1, 2) << endl;

	return 0;
}

// 정의(Definition)
int add(int a, int b)
{
	return a + b;
}

int subtract(int a, int b)
{
	return a - b;
}

int multiply(int a, int b)
{
	return a * b;
}