// std::cin 더 잘 쓰기
// ignore(), clear(), fail()

#include <iostream>

using namespace std;

int getInt()
{
	while(true)
	{
		cout << "Enter an integer number : ";
		int x;
		cin >> x;

		if (std::cin.fail())
		{
			std::cin.clear();
			std::cin.ignore(32767, '\n'); // 버퍼 비우기
			cout << "invalid number, please try again\n";
		}
		else
		{
			std::cin.ignore(32767, '\n'); // 버퍼 비우기
			return x;
		}
	}
}

int getOperator()
{
	while(true)
	{
		cout << "Enter an operator (+, -) : "; //TODO: more operators *, / etc.
		char op;
		cin >> op;
		std::cin.ignore(32767, '\n'); // 버퍼 비우기

		if (op == '+' || op == '-')
			return op;
		else
			cout << "Invalid operator please try again\n";
	}
}

void printResult(int x, char op, int y)
{
	if (op == '+') cout << x + y << endl;
	else if (op == '-') cout << x - y << endl;
	else
	{
		cout << "Invalid operator\n";
	}
}

int main()
{
	int x = getInt();
	char op = getOperator();
	int y = getInt();

	printResult(x, op, y);

	return 0;
}