#include <iostream>

using namespace std;

int main()
{
	int x;
	cin >> x;


	if (x > 10) // 중괄호로 감싸는건 코드를 보고 선택
		cout << x << "is greater than 10" << endl;
	else
		cout << x << "is not greater than 10" << endl;

	// if문 chaining
	if (x > 10) // 애매한 조건문은 중괄호로 확실히 해주자
		cout << x << "is greater than 10" << endl;
	else if (x < 10)
		cout << x << "is less than 10" << endl;
	else // if (x == 10)
		cout << x << "is exactly 10" << endl;
	// else는 문법상 자동으로 가까운 if로 붙는다.

	if (1) //  조건문을 벗어나면 x는 사라짐
		int x = 5;
	else
		int x = 6;

	cout << x << endl;

	if (x > 10)
		; // null statement

	if (x = 0)// if (x == 10)
		cout << x << endl; // 0를 x에 넣고 false로 인식한다.

	return 0;
}