// 영역 제한 열거형(열거형 클래스)
// Scoped Enumerations(Enum Class) Enum Struct도 있긴하다.
// C++ 11

#include <iostream>

/* 1. enum을 써버리면 말도 안되는 상황이 생겨버림
int main()
{
	using namespace std;

	enum Color
	{
		RED,
		BLUE
	};

	enum Fruit
	{
		BANANA,
		APPLE
	};

	Color color = RED;
	Fruit fruit = BANANA;

	if(color==fruit)
		cout << "Color is fruit ? " << endl;

	return 0;

}//*/

//* 2. enum class로 실수를 피하자
int main()
{
	using namespace std;

	enum class Color
	{
		RED,
		BLUE
	};

	enum class Fruit
	{
		BANANA,
		APPLE
	};

	Color color = Color::RED;
	Fruit fruit = Fruit::BANANA;

	if (static_cast<int>(color) == static_cast<int>(fruit)) // 비교가 가능하지만 사용자가 원하는 부분은 아니다.
	//if(color==fruit) // enum class라서 막혀버림 같은 enum class 안에 들어가는 것들만 비교 가능
		cout << "Color is fruit ? " << endl;

	return 0;
}//*/