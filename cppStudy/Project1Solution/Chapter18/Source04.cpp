// 흐름 상태(stream states)와 입력 유효성 검증
#include <iostream>
#include <cctype>
#include <string>
#include <bitset>

using namespace std;

void printCharacterClassification(int i)
{
	cout << boolalpha;
	cout << "isalnum() = " << static_cast<bool>(isalnum(i)) << endl;
	cout << "isblank() = " << static_cast<bool>(isblank(i)) << endl;
	cout << "isdigit() = " << static_cast<bool>(isdigit(i)) << endl;
	cout << "islower() = " << static_cast<bool>(islower(i)) << endl;
	cout << "isupper() = " << static_cast<bool>(isupper(i)) << endl;
}

void printStates(const std::ios& stream)
{
	cout << boolalpha;
	cout << "good() = " << stream.good() << endl;
	cout << "eof() = " << stream.eof() << endl;
	cout << "fail() = " << stream.fail() << endl;
	cout << "bad() = " << stream.bad() << endl;
}

bool isAllDigit(const string& str)
{
	bool ok_flag = true;

	for (const auto& e : str)
	{
		if (!std::isdigit(e))
		{
			ok_flag = false;
			break;
		}
	}

	return ok_flag;
}

int main()
{
	/*while (true)
	{
		int i;
		cin >> i;

		printStates(cin);

		cout << boolalpha;
		cout << std::bitset<8>(cin.rdstate()) << endl;
		cout << std::bitset<8>(std::istream::goodbit) << endl;
		cout << std::bitset<8>(std::istream::failbit) << endl;
		cout << !bool((cin.rdstate() & std::istream::failbit) != 0) << endl;

		cin.clear();
		cin.ignore(1024, '\n');
		cout << endl;
	}*/

	while (true)
	{
		char c;
		cin >> c;

		printStates(cin);

		printCharacterClassification(c);

		cin.clear();
		cin.ignore(1024, '\n');
		cout << endl;
	}

	cout << boolalpha;
	cout << isAllDigit("1234") << endl;
	cout << isAllDigit("a1234") << endl;

	// regular expression 쓰면 위의 작업들 편해짐

	return 0;
}