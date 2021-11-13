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
	//switch (static_cast<int>(color)) static_cast�� ���� ���ڷ� ����� ���� ������...

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
			//break; // �ǵ��� ���� �ٿ��� ����ϸ� �ȴ�.
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
		int a; // ����
		//int b = 5; // �Ұ���
	case 0:
		cout << "Zero";
		//break; // �ǵ��� ���� �ٿ��� ����ϸ� �ȴ�.
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
		int a; // case�� �ȿ��� �����ص� switch ���� �� �������� ������ ȿ���� ����
		break; // ���⼭�� �����ϰ� ���� �ʹٸ� case�� ������ �߰�ȣ�� ����������.
	case 1:
		a = 123;
		cout << a;
		//break;

	default:
		cout << "undefined input " << x << endl;
		// break;�� ��� �ȴ�.
	}


	return 0;
}