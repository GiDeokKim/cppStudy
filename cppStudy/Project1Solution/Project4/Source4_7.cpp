// ������
// Enumerated Types

#include <iostream>
#include <typeinfo>

// ����� �ְ� ��Ŭ����ϴ� ������� ����
enum Color // user-defined data types
{
	COLOR_BLACK, //= -3, ó�� �� ���ڸ� �������� 1�� �ö� ������ ������.
	COLOR_RED, // ���� ������ ���� �� ������ ������ �����.
	COLOR_BLUE,
	COLOR_GREEN,// ������ ��ǥ �־ �ȴ�.
	COLOR_SKYBLUE,
	// BLUE
};

enum Feeling
{
	HAPPY,
	JOY,
	TYRED,
	BLUE, // �ٸ� enum�� �ִ� ���̶� �̸��� ������ �ȵȴ�.
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

	// ... �̷������� �����ϸ� ���������.
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

	Color my_color = static_cast<Color>(3); // �׳� �ִ°� �ȵȴ�. ���ʿ� �ȱ׷��� ���� ��������� enum

	// string�� ���ϴ� ������ ���ǹ� ����� �� ���ϴ� ���� ����.

	return 0;
}