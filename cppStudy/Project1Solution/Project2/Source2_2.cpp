// 정수형 Integers
// 네트워크 계열을 다루는 사람들은 char 타입을 1 byte 정수 자료형으로 사용한다.
// long long 8 bytes. C99 / C++11 type
// int는 가장 앞 한 비트를 부호에 사용한다.
// 양수는 0 음수는 1을 부호 비트로 사용한다.
// unsigned는 부호 비트 없이 모두 숫자를 표현할 때 사용한다.

#include <iostream>
#include <cmath>
#include <limits>

int main()
{
	using namespace std;

	short		s = 1;	// 2 bytes = 2 * 8 bits = 16 bits
	int			i = 1;	// 4 bytes = 4 * 8 bits = 32 bits
	long		l = 1;	// 4 bytes = 4 * 8 bits = 32 bits
	long long	ll = 1;	// 8 bytes = 8 * 8 bits = 64 bits


	// sizeof로 자료형의 크기를 알 수 있다. 단위는 byte
	cout << sizeof(short) << endl;
	cout << sizeof(int) << endl;
	cout << sizeof(long) << endl; // int와 같이 4 bytes이니 똑같이 쓸 수 있음.
	cout << sizeof(long long) << endl;

	cout << pow(2, sizeof(short) * 8 - 1/*부호 표현에 의한 -1*/) - 1/*0에 대한 -1*/<< endl;

	cout << numeric_limits<short>::max() << endl;
	cout << numeric_limits<short>::min() << endl;
	cout << numeric_limits<short>::lowest() << endl;

	s = 32767;
	s = s + 1; // 32768
	cout << s << endl; // overflow
	s = -32768;
	cout << "short min : " << s << endl;
	s = s - 1;
	cout << s << endl; // overflow
	
	unsigned int iii = -1;
	cout << iii << endl; // overflow

	// 정수형에 대해 나누기 연산을 하면 소수점 아래가 버려진다.

	return 0;
}