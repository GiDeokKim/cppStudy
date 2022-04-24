// 기본적인 서식 맞추기 Formatting
// 모두가 따라야하는 규칙은 없고 사람이 보기 편하면 된다.
// 컴파일러는 리터럴이 아닌 빈칸과 빈줄은 무시한다.

#include <iostream>

using namespace std;

int add(int x, int y) { return x + y; }

int main()
{
	// 이처럼 줄을 바꾸더라도 컴파일러는 무시한다.
	// string 안의 빈칸은 컴파일러가 중요시 여긴다.
	cout << "Hello, World" <<	// 줄바꿈을 행했다면 operator를 뒤에 남겨두는 것이 좋다.
		" Hello Home" << endl;

	// 앞의 빈칸(tab)을 만드는 것을 indenting이라 한다.
	// 프로그래머가 반드시 해줘야하는 부분.

	// 변수 대입 연산자 줄맞춤
	int x			= 1;
	int my_value	= 123;
}