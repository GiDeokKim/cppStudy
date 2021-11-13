//goto
#include <iostream>
#include <cmath> // sqrt()

using namespace std;

int main()
{
	double x;

tryAgain: //label
	cout << "Enter a non-negative number\n";
	cin >> x;

	if (x < 0.0)
		goto tryAgain;

	cout << sqrt(x) << endl;
	

	//goto skip; // ¿¡·¯ ¶ä

	int x = 5;

skip:
	x += 3;

	return 0;
}
