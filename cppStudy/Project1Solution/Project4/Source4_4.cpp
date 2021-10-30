// auto 키워드와 자료형 추론 Type inference

#include <iostream>

//int add(int x, int y)
//{
//	return x + y;
//}

// 매개변수에는 auto를 쓸 수 없다.
// 다양한 자료형을 매개변수로 넣으려면
auto add(int x, int y)
{
	return x + (double)y;
}

//auto add(double x, double y)
//{
//	return x + y;
//}

// template을 쓰면 위와 같은 상황을 해결할 수 있다.
// c++ 17 이후부터는 여러개의 return 값을 동시에 반환할 수 있다.(template 사용)


int main()
{
	using namespace std;

	int a = 123;

	auto b = 123123123123123123; // auto를 쓰려면 반드시 초기화를 해야한다.
	auto d = 123.0;
	auto c = 1 + 2.0;
	auto result = add(1, 2);

	return 0;
}