// 열거형
// Enumerated Types

#include <iostream>
#include <typeinfo>

// 헤더에 넣고 인클루드하는 방식으로 구현
enum Color // user-defined data types
{
	COLOR_BLACK, //= -3, 처음 들어간 숫자를 기준으로 1씩 올라간 수들을 가진다.
	COLOR_RED, // 같은 정수를 넣을 수 있지만 문제가 생긴다.
	COLOR_BLUE,
	COLOR_GREEN,// 마지막 쉼표 있어도 된다.
	COLOR_SKYBLUE,
	// BLUE
};

enum Feeling
{
	HAPPY,
	JOY,
	TYRED,
	BLUE, // 다른 enum에 있는 것이라도 이름이 같으면 안된다.
};

int computeDamage(int weapon_id)
{
	if (weapon_id == 0) // sword
	{
		return 1;
	}

	if (weapon_id == 1) // hammer
	{
		return 2;
	}

	// ... 이런식으로 구현하면 힘들어진다.
}

int main()
{
	using namespace std;

	Color paint = COLOR_BLACK;
	Color house(COLOR_BLUE);
	Color apple{ COLOR_RED };

	cout << paint << " " << COLOR_BLACK << endl;

	int color_id = COLOR_BLUE;

	cout << color_id << endl;

	Color my_color = static_cast<Color>(3); // 그냥 넣는건 안된다. 애초에 안그러기 위해 만들어진게 enum

	// string을 비교하는 것으로 조건문 만드는 건 피하는 것이 좋다.

	return 0;
}