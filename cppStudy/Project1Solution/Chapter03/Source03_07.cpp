// 이진수 Binary Numbers

#include <iostream>

int main()
{
	using namespace std;

	// 십진수 : 337			= 300 + 30 + 7 = 3 * 10^2 + 3 * 10^1 + 7 * 10^0
	// 이진수 : 0101 1110	= 0 * 2^7 + 1 * 2^6 + 0 * 2^5 + 1 * 2^4 + 1 * 2^3 + 1 * 2^2 + 1 * 2^1 + 0 * 2^0
	//						= 0 * 128 + 1 * 64 + 0 * 32 + 1 * 16 + 1 * 8 + 1 * 4 + 1 * 2 + 0 * 1
	//						= 64 + 16 + 8 + 4 + 2

	// 보수 complement
	// -5를 구하는 법 : 5를 이진수로 표현하고 보수로 변환한 뒤 1을 더해준다.
	// 1을 더해주는 이유는 0을 1개의 이진수로 표현하기 위해서이다.
	// 0000 0000
	// 1111 1111 complement
	// 0000 0000 1을 더한 결과

	return 0;
}