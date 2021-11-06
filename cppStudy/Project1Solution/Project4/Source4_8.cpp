// 영역 제한 열거형(열거형 클래스)
// Scoped Enumerations(Enum Class) Enum Struct도 있긴하다.

#include <iostream>

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

	if (static_cast<int>(color) == static_cast<int>(fruit))
	//if(color==fruit) // enum class라서 막혀버림
		cout << "Real?" << endl;

	return 0;
}