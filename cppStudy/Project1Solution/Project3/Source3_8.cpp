// 비트단위 연산자
// Bitwise Operators
// 사람은 자료형 단위로 계산하지만
// 컴퓨터는 비트 단위로 계산한다.

#include <iostream>
#include <bitset>

int main()
{
	using namespace std;

	// <<	left	shift
	// >>	right	shift
	// ~	not
	// &	and
	// |	or
	// ^	xor

	unsigned int a = 1024;
	cout << std::bitset<16>(a) << " " << a << endl; // 캐럿 안이 8라서 8bit만 표현된다.
	cout << std::bitset<16>(a >> 1) << " " << (a >> 1) << endl;
	cout << std::bitset<16>(a >> 2) << " " << (a >> 2) << endl;
	cout << std::bitset<16>(a >> 3) << " " << (a >> 3) << endl;
	cout << std::bitset<16>(a >> 4) << " " << (a >> 4) << endl;
	cout << std::bitset<16>(~a) << " " << (~a) << endl;
	unsigned int b = a << 3;
	cout << std::bitset<16>(b) << " " << b << endl;

	unsigned int a1 = 0b1100;
	unsigned int b1 = 0b0110;
	cout << a1 << " " << b1 << endl;

	cout << std::bitset<4>(a & b) << endl; // bitwise AND
	cout << std::bitset<4>(a | b) << endl; // bitwise OR
	cout << std::bitset<4>(a ^ b) << endl; // bitwise XOR

	return 0;
}