// 열거형
// Enumerated Types
// enum은 헤더에 넣고 인클루드하는 방식으로 사용한다.

#include <iostream>
#include <typeinfo>

/* 1. 무기별 데미지 표현하기 안좋은 예시
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
}//*/

/* 2. 열거형 Enumerated Types (User-defined data types)
enum Weapon
{
	WEAPON_SWORD,
	WEAPON_HAMMER,	// 마지막 쉼표 있어도 된다.
}; // ;을 반드시 써줘야 함

int computeDamage(int weapon_id)
{
	if (weapon_id == WEAPON_SWORD)
	{
		return 1;
	}

	if (weapon_id == WEAPON_HAMMER)
	{
		return 2;
	}

	// ...
}//*/

/* 3. 초기화 방법은 기본 자료형과 같으며, 앞 항목에 들어간 숫자를 기준으로 1씩 올라간 수를 다음 항목이 가진다.
enum Color
{
	COLOR_BLACK = -3, // 수동 할당보다 기본 할당이 좋다.
	COLOR_RED,
	COLOR_BLUE = 5,
	COLOR_GREEN,
	COLOR_SKYBLUE,
};

int main()
{
	using namespace std;

	// 초기화 방식은 다른 타입들과 같다.
	Color paint = COLOR_BLACK;
	Color house(COLOR_BLUE);
	Color apple{ COLOR_RED };

	Color my_color = COLOR_BLACK;

	cout << my_color << " " << COLOR_BLACK << endl;

	return 0;
}//*/

/* 4. 같은 정수를 넣으면 문제가 발생할 수 있다.
enum Color
{
	COLOR_BLACK,
	COLOR_RED,
	COLOR_BLUE = 5,
	COLOR_GREEN = 5,
	COLOR_SKYBLUE,
};

int main()
{
	using namespace std;

	if (COLOR_BLUE == COLOR_GREEN)
		cout << "equal" << endl;

	return 0;
}//*/

/* 5. 서로 다른 enum일지라도 이름이 같으면 문제가 생긴다. (enum class로 해결 가능)
enum Color
{
	COLOR_BLACK,
	COLOR_RED,
	COLOR_BLUE,
	COLOR_GREEN,
	COLOR_SKYBLUE,
	BLUE
};
enum Feeling
{
	HAPPY,
	JOY,
	TIRED,
	BLUE,
};

int main()
{
	using namespace std;

	int color_id = BLUE;

	cout << color_id << endl;

	return 0;
}//*/

/* 6. int 자료형에 enum을 넣는 것은 가능하지만 반대는 안된다.
enum Color
{
	COLOR_BLACK,
	COLOR_RED,
	COLOR_BLUE,
	COLOR_GREEN,
	COLOR_SKYBLUE,
};

int main()
{
	using namespace std;

	int color_id = COLOR_BLUE;
	cout << color_id << endl;

	// 그냥 넣는건 안된다. 애초에 안그러기 위해 만들어진게 enum
	//Color test = color_id;
	//Color test = 3;

	Color my_color = static_cast<Color>(3);

	return 0;
}//*/

//* 7. cin으로 입력 받으려면 우회해야 한다.
enum Color // user-defined data types
{
	COLOR_BLACK,
	COLOR_RED,
	COLOR_BLUE,
	COLOR_GREEN,
	COLOR_SKYBLUE,
};

int main()
{
	using namespace std;

	Color my_color = static_cast<Color>(3);

	// cin으로 입력 받는건 안된다.
	//cin >> my_color;

	// 우회하는 방법
	int in_number;
	cin >> in_number;

	if (in_number == 0) my_color = COLOR_BLACK;
	// ...

	return 0;
}//*/