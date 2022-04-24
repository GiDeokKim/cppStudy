// using문과 모호성

#include <iostream>

namespace a
{
	int my_var(10);
	int my_a(123);
}

namespace b
{
	int my_var(20);
	int my_b(456);
}


int main()
{
	using namespace std;
	// using std::cout; // 사이에 namespace는 쓰지 않는다.
	// using std::endl;

	cout << "Hello " << endl;


	//using namespace a; // 헤더에서 전역으로 사용해버리면 해당 헤더를 인클루드하는 파일에 모두 영향을 준다.
	//using namespace b; // 따라서 cpp에 넣는것이 좋다.

	// cout << my_var << endl; // a와 b에 둘다 있으니 모호해짐
	cout << a::my_var << endl; // 영역지정 연산자를 통해 해결 가능



	{
		using namespace a; // 한번 선언하면 취소할 방법이 없다. 따라서 적당히 영역을 블럭으로 만들어야한다.
		cout << my_var << endl;
	}

	{
		using namespace b;
		cout << my_var << endl;
	}

	return 0;
}