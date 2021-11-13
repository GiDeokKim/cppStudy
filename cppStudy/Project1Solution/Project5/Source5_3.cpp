// switch-case
#include <iostream>

using namespace std;

enum class Colors
{
	BLACK,
	WHITE,
	RED,
	GREEN,
	BLUE
};

void printColorName(Colors color)
{
	//switch (static_cast<int>(color)) static_cast를 쓰고 숫자로 사용할 수는 있지만...

	switch (color)
	{
	case Colors::BLACK:
		cout << "Black\n";
	case Colors::WHITE:
		cout << "White\n";
	case Colors::RED:
		cout << "Red\n";
	case Colors::GREEN:
		cout << "Green\n";
	case Colors::BLUE:
		cout << "Blue\n";
	}


}

int main()
{
	printColorName(Colors::BLACK);

	int x;
	cin >> x;

	{
		switch (x)
		{
		case 0:
			cout << "Zero";
			//break; // 의도에 따라 붙여서 사용하면 된다.
		case 1:
			cout << "One";
			//break;
		case 2:
			cout << "Two";
			//break;
		}

		cout << endl;
	}

	switch (x)
	{
		int a; // 가능
		//int b = 5; // 불가능
	case 0:
		cout << "Zero";
		//break; // 의도에 따라 붙여서 사용하면 된다.
	case 1:
		cout << "One";
		//break;
	case 2:
		cout << "Two";
		//break;
	}

	switch (x)
	{
		
	case 0:
		int a; // case문 안에서 선언해도 switch 제일 윗 공간에서 선언한 효과를 가짐
		break; // 여기서만 선언하고 쓰고 싶다면 case문 각각에 중괄호로 무껑버리자.
	case 1:
		a = 123;
		cout << a;
		//break;

	default:
		cout << "undefined input " << x << endl;
		// break;는 없어도 된다.
	}


	return 0;
}