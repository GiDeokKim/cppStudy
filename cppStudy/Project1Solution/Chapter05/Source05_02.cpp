#include <iostream>

using namespace std;

int main()
{
	int x;
	cin >> x;


	if (x > 10) // �߰�ȣ�� ���δ°� �ڵ带 ���� ����
		cout << x << "is greater than 10" << endl;
	else
		cout << x << "is not greater than 10" << endl;

	// if�� chaining
	if (x > 10) // �ָ��� ���ǹ��� �߰�ȣ�� Ȯ���� ������
		cout << x << "is greater than 10" << endl;
	else if (x < 10)
		cout << x << "is less than 10" << endl;
	else // if (x == 10)
		cout << x << "is exactly 10" << endl;
	// else�� ������ �ڵ����� ����� if�� �ٴ´�.

	if (1) //  ���ǹ��� ����� x�� �����
		int x = 5;
	else
		int x = 6;

	cout << x << endl;

	if (x > 10)
		; // null statement

	if (x = 0)// if (x == 10)
		cout << x << endl; // 0�� x�� �ְ� false�� �ν��Ѵ�.

	return 0;
}