#include <iostream>

using namespace std;

//int main()
//{
//	// ������ �ϱ� ���� �ĺ����ε� ������ ������ ����
//	int x = 0;
//	//int x = 1;
//
//	cout << x << " " << &x << endl;
//	{
//		// ���� x�� �ٸ���.
//		// �ٸ� �޸𸮿� ���� �ĺ��� ���� ��ü�� �ٸ���.
//		//int x = 0;
//		x = 1;
//		cout << x << " " << &x << endl;
//	}
//
//	cout << x << " " << &x << endl;
//
//	{
//		int x = 0;
//		cout << x << " " << &x << endl;
//	}
//
//	return 0;
//}

void doSomething(int x)
{
	x = 123;
	cout << x << "\t" << &x << endl; // #2
}

int main()
{
	int x = 0;
	cout << x << "\t" << &x << endl; // #1

	doSomething(x);
	cout << x << "\t" << &x << endl; // #3

	return 0;
}