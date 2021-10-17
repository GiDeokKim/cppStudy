// 지역변수의 범위와 지속기간
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
// 코드 오른 클릭 Properties >> C/C++ >> Language >> C++ Langauge Standard
// 컴파일러 버전을 올리는 방법
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
		int apple = 3;// 18~19에만 살아 있다. 외부 apple을 숨겨준다.
		cout << apple << endl;
	}

	cout << apple << endl; //apple에 커서 올리면 같은 apple이 표시된다.

	// ::는 scope resolution operator라 부른다.
	work1::a;
	work1::doSomething();

	work2::a;
	work2::doSomething();

	work3::work33::work333::doSomething();

	return 0;
}

// apple = 3; // error