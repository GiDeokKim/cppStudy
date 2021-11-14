// auto 키워드와 자료형 추론 Type inference

#include <iostream>

/* 1. auto 키워드를 변수에 사용
int main()
{
	using namespace std;

	// r-value 123은 int라는 의미를 내표한다.
	// 앞에 언급하는 자료형도 int로 중복된 정보가 들어있다.
	int a = 123;

	// auto를 쓰려면 반드시 초기화를 해야한다.
	auto b = 123123123123123123;
	auto d = 123.0;
	auto c = 1 + 2.0; // 자동 형변환

	return 0;
}//*/

/* 2. 함수의 return 값에 auto 키워드 사용
int add(int x, int y)
{
	return x + y;
}

int main()
{
	using namespace std;

	auto result = add(1, 2);

	return 0;
}//*/

/* 3. 함수 정의 자체에서 auto 키워드 사용
auto add(int x, int y)
{
	return x + y;
}

int main()
{
	using namespace std;

	auto result = add(1, 2);

	return 0;
}//*/

/* 4. return 값이 double로 변해도 잘 작동
auto add(int x, int y)
{
	return x + (double)y;
}

int main()
{
	using namespace std;

	auto result = add(1, 2);

	return 0;
}//*/

/* 5. auto는 매개 변수에 사용 불가
auto add(auto x, auto y) // 불가능한 표현
{
	return x + (double)y;
}

// 아래와 같이 다양한 자료형을 넣는 것이 목적이고
// 함수를 한 번만 만들고 싶다면
// template을 사용하면 된다.
auto add(int x, int y)
{
	return x + (double)y;
}

auto add(double x, double y)
{
	return x + y;
}//*/

// 6. function trailing return type
auto add(int x, int y) -> double;

int main()
{
	using namespace std;

	auto result = add(1, 2);

	return 0;
}

auto add(int x, int y) -> double
{
	return x + (double)y;
}//*/