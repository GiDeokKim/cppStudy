// �� ������
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

	// XOR c/c++���� ���� ����
	// false	XOR false	= false
	// false	XOR true	= true
	// true		XOR false	= true
	// true		XOR true	= false

	// short circuit evaluation
	int x1 = 1; //2�� �ٲ㼭 �ϸ� if�� ���ǹ��� ���Ծ���
	int y1 = 2;

	// ���� ���Ǻ��� üũ�� �ϳ��� false�� ������ �� �ڿ� ������ Ȯ�� ����
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