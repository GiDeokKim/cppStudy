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

	//apple = 1; // 지역 변수가 생성되기 이전이기 때문에 error

	int apple = 5;

	cout << apple << endl;

	{
		apple = 1;

		int apple = 3; // 내부 apple 생성

		cout << apple << endl;
	} // 내부 apple 소멸

	//apple을 클릭하면 같은 메모리를 가리키는 apple이 표시된다.
	cout << apple << endl;

	// ::는 scope resolution operator라 부른다.
	work1::a;
	work1::doSomething();

	work2::a;
	work2::doSomething();

	work3::work33::work333::doSomething();

	return 0;
}

// apple = 3; // 지역 변수가 소멸되었기 때문에 error