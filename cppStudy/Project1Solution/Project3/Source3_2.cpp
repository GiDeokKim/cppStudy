// ��� ������
// arithmetic operators

#include <iostream>

int main()
{
	using namespace std;

	int x = 1;

	// ���� ������ +, -
	int y = -x;
	int z = +x;

	// ���� ������ +, -, *, /, %
	x = 7;
	y = 4;
	cout << x / y				<< endl;
	cout << float(x) / y		<< endl;
	cout << x / float(y)		<< endl;
	cout << float(x) / float(y) << endl;
	
	cout << -5 / 2 << endl; // c++ 11���ʹ� �Ҽ��� �Ʒ��� �����ϱ�� ����
	cout << -5 % 2 << endl;
	cout << -5 % -2 << endl;
	cout << 5 % -2 << endl;

	// �ڵ� �۾� ������ �ٿ��ش�.
	// �Ǽ��� �ٿ��ش�. ���Ⱑ ��������.
	z += y;
	return 0;
}