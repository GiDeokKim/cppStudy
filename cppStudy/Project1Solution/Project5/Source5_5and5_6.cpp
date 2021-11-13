// ¹Ýº¹¹® while & do-while
#include <iostream>

using namespace std;

int main()
{
	cout << "while-loop test" << endl;
	int count = 0;
	// while (true)
	// while (false)
	while (count < 10)
	{
		cout << count << endl;

		count++;

		//if (count == 10) break;
	}

	// while -> goto -> for -> do-while problems

	int selection;

	do
	{
		cout << "1. add\n";
		cout << "2. sub\n";
		cout << "3. mult\n";
		cout << "4. div\n";
		cin >> selection;
	} while (selection <= 0 || selection >= 5);

	cout << "You selected " << selection << endl;

	return 0;
}