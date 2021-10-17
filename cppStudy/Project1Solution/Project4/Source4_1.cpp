// ���������� ������ ���ӱⰣ
// Scope Duration

#include <iostream>

namespace work1
{
	int a = 1;
	void doSomething()
	{
		a += 3;
	}
	namespace work11 //c++17
	{
		namespace work111
		{

		}
	}
}


namespace work2
{
	int a = 1;
	void doSomething()
	{
		a += 5;
	}
}

//c++17
// �ڵ� ���� Ŭ�� Properties >> C/C++ >> Language >> C++ Langauge Standard
// �����Ϸ� ������ �ø��� ���
namespace work3::work33::work333
{
	int a = 1;
	void doSomething()
	{
		a += 3;
	}
}

int main()
{
	using namespace std;

	//apple = 1; //error

	int apple = 5;

	cout << apple << endl;

	{
		apple = 1;
		int apple = 3;// 18~19���� ��� �ִ�. �ܺ� apple�� �����ش�.
		cout << apple << endl;
	}

	cout << apple << endl; //apple�� Ŀ�� �ø��� ���� apple�� ǥ�õȴ�.

	// ::�� scope resolution operator�� �θ���.
	work1::a;
	work1::doSomething();

	work2::a;
	work2::doSomething();

	work3::work33::work333::doSomething();

	return 0;
}

// apple = 3; // error