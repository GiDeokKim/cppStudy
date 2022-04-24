// ������
// Enumerated Types
// enum�� ����� �ְ� ��Ŭ����ϴ� ������� ����Ѵ�.

#include <iostream>
#include <typeinfo>

/* 1. ���⺰ ������ ǥ���ϱ� ������ ����
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

	// ... �̷������� �����ϸ� ���������.
}//*/

/* 2. ������ Enumerated Types (User-defined data types)
enum Weapon
{
	WEAPON_SWORD,
	WEAPON_HAMMER,	// ������ ��ǥ �־ �ȴ�.
}; // ;�� �ݵ�� ����� ��

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

/* 3. �ʱ�ȭ ����� �⺻ �ڷ����� ������, �� �׸� �� ���ڸ� �������� 1�� �ö� ���� ���� �׸��� ������.
enum Color
{
	COLOR_BLACK = -3, // ���� �Ҵ纸�� �⺻ �Ҵ��� ����.
	COLOR_RED,
	COLOR_BLUE = 5,
	COLOR_GREEN,
	COLOR_SKYBLUE,
};

int main()
{
	using namespace std;

	// �ʱ�ȭ ����� �ٸ� Ÿ�Ե�� ����.
	Color paint = COLOR_BLACK;
	Color house(COLOR_BLUE);
	Color apple{ COLOR_RED };

	Color my_color = COLOR_BLACK;

	cout << my_color << " " << COLOR_BLACK << endl;

	return 0;
}//*/

/* 4. ���� ������ ������ ������ �߻��� �� �ִ�.
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

/* 5. ���� �ٸ� enum������ �̸��� ������ ������ �����. (enum class�� �ذ� ����)
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

/* 6. int �ڷ����� enum�� �ִ� ���� ���������� �ݴ�� �ȵȴ�.
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

	// �׳� �ִ°� �ȵȴ�. ���ʿ� �ȱ׷��� ���� ��������� enum
	//Color test = color_id;
	//Color test = 3;

	Color my_color = static_cast<Color>(3);

	return 0;
}//*/

//* 7. cin���� �Է� �������� ��ȸ�ؾ� �Ѵ�.
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

	// cin���� �Է� �޴°� �ȵȴ�.
	//cin >> my_color;

	// ��ȸ�ϴ� ���
	int in_number;
	cin >> in_number;

	if (in_number == 0) my_color = COLOR_BLACK;
	// ...

	return 0;
}//*/