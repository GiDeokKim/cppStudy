#include <iostream>

using namespace std;

//int main()
//{
//	// 구분을 하기 위한 식별자인데 같으면 문제가 생김
//	int x = 0;
//	//int x = 1;
//
//	cout << x << " " << &x << endl;
//	{
//		// 앞의 x와 다르다.
//		// 다른 메모리에 대한 식별자 공간 자체가 다르다.
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