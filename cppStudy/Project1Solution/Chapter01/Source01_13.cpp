// 네임스페이스 (명칭 공간)
// namespace
// 같은 종류의 매개변수를 쓰면서 같은 이름인 함수를 사용해야 할 때
// 혹은 특수하게 관리해야 할 때


#include <iostream>

namespace MySpace1
{
	// 네임스페이스 안에 네임스페이스 가능
	namespace InnerSpace
	{
		int myFunction()
		{
			return 0;
		}
	}
	int doSomething(int a, int b)
	{
		return a + b;
	}
}

namespace MySpace2
{

	int doSomething(int a, int b)
	{
		return a * b;
	}
}


using namespace std;

int main()
{
	
	// 3*4가 실행된다.
	cout << MySpace2::doSomething(3, 4) << endl;

	//앞으로 MySpace1이라는 namespace를 사용할 것이다.
	using namespace MySpace1;

	// 3+4가 실행된다.
	cout << doSomething(3, 4) << endl;
	InnerSpace::myFunction();

	return 0;
}