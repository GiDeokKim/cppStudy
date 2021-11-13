// 제어 흐름 개요 Control flow
// 순서도 Flow Chart

// 중단 Halt

// 점프 Jump
// goto, break, continue

// 조건 분기 Conditional branches
// if, switch

// 반복 Loops
// while, do while, for

// 예외 처리 Exceptions
// try, catch, throw

#include <iostream>
#include <cstdlib>

int main()
{
	std::cout << "I love you" << std::endl;

	// return 0;

	// 긴급하게 나가는 경우 사용 return 타입에 상관 없이 나가버릴 수 있다.
	// 무조건 여기서 끝내! 디버깅할 때 사용
	exit(0); // cstdlib가 필요

	std::cout << "I love you, too" << std::endl;

	return 0;
}