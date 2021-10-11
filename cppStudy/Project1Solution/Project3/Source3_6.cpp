// 논리 연산자
// Logical operators

#include <iostream>

int main()
{
	using namespace std;

	bool x = true;
	bool y = false;

	// logical NOT
	cout << !x << endl;

	// logical AND
	cout << (x && y) << endl;

	// logicla OR
	cout << (x || y) << endl;

	// XOR c/c++에는 없는 연산
	// false	XOR false	= false
	// false	XOR true	= true
	// true		XOR false	= true
	// true		XOR true	= false

	// short circuit evaluation
	int x1 = 1; //2로 바꿔서 하면 if의 조건문을 진입안함
	int y1 = 2;

	// 좌측 조건부터 체크함 하나라도 false가 나오면 그 뒤에 조건은 확인 안함
	if (x1 == 1 && y1++ == 2)
	{
		// do something
	}

	cout << y1 << endl;

	bool v1 = true;
	bool v2 = false;
	bool v3 = false;

	bool r1 = v1 || v2 && v3;
	bool r2 = (v1 || v2) && v3;
	bool r3 = v1 || (v2 && v3);

	cout << r1 << endl;
	cout << r2 << endl;
	cout << r3 << endl;

	return 0;
}