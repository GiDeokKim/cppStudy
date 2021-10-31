// 연산자 우선순위와 결합법칙
// Operator Precedence and Associativity
// 관련 내용은 검색으로 확인하는게 좋다.
// 순서가 애매하다면 프로그래머가 직접 ()를 통해 순서를 확실히 한다.

#include <iostream>

int main()
{
	using namespace std;

	// 약속된 연산자 우선순위로 계산된다.
	int x = 4 + 2 * 3;
	int y = (4 + 2) * 3;

	return 0;
}