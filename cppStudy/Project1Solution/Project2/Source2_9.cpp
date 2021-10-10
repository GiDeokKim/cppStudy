// 심볼릭 상수 Symbolic Constants
// c++ 11 constexpr

#include <iostream>
#include "MY_CONSTANTS.h"
#define PRICE_PER_ITEM 30 // c에서 많이 쓰지 c++에서는 잘 안쓴다. why? 적용범위가 너무 넓다.

using namespace std;

void printNumber(const int my_number)
{
	cout << my_number << endl;
}

int main()
{
	printNumber(123);

	// 컴파일타임에서 결정남(컴파일타임 상수)
	const double gravity = 9.8; // 추후에 해당 값을 변경하려할때 컴파일러가 막아준다.
	//double const gravity = 9.8; // 이처럼 선언해도 가능하다.
	// 심볼릭 상수는 선언과 동시에 초기화를 해야한다.

	int number;
	cin >> number;

	// 런타임에서 결정남(런타임 상수)
	const int special_number(number); // 사용자가 입력하는 심볼릭 상수

	// 컴파일타임에서 결정난다는 것을 키워드로 표현한다.
	constexpr int price_per_item = 123; // 매크로보다 const가 더 좋다.

	int num_item = 123;
	int price = num_item * price_per_item;

	double radius;
	cin >> radius;
	double circumference = 2.0 * radius * constants::pi;

	return 0;
}