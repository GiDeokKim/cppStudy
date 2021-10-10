// 정수형 Integers
// 네트워크 계열을 다루는 사람들은 char 타입을 1 byte 정수 자료형으로 사용한다.
// long long 8 bytes. C99 / C++11 type
// int는 가장 앞 한 비트를 부호에 사용한다.
// 양수는 0 음수는 1을 부호 비트로 사용한다.
// unsigned는 부호 비트 없이 모두 숫자를 표현할 때 사용한다.
// 정수형에 대해 나누기 연산을 하면 소수점 아래가 버려진다.

#include <iostream>
#include <cmath>
#include <limits>

int main()
{
	using namespace std;

	// sizeof로 자료형의 크기를 알 수 있다. 단위는 byte
	cout << sizeof(short)		<< endl; // 2 bytes = 2 * 8 bits = 16 bits
	cout << sizeof(int)			<< endl; // 4 bytes = 4 * 8 bits = 32 bits
	cout << sizeof(long)		<< endl; // 4 bytes = 4 * 8 bits = 32 bits
	cout << sizeof(long long)	<< endl; // 8 bytes = 8 * 8 bits = 64 bits
	// long과 int는 4 bytes이니 같은 범위의 수를 다룬다.
	
	cout << "\n";

	// 32767
	cout << pow(2, sizeof(short) * 8 - 1/*부호 표현에 의한 -1*/) - 1/*0에 대한 -1*/<< endl;

	cout << numeric_limits<short>::max()	<< endl; // 32767
	cout << numeric_limits<short>::min()	<< endl; // -32768
	cout << numeric_limits<short>::lowest() << endl; // -32768

	cout << "\n";

	short s = 32767;
	cout << "short max : " << s << endl;
	s = s + 1; // 32768
	cout << "short max + 1 (overflow) : " << s << endl;

	s = -32768;
	cout << "short min : " << s << endl;
	s = s - 1; // -32769
	cout << "short min - 1 (overflow) : " << s << endl;
	
	unsigned int iii = -1;
	cout << iii << endl; // overflow

	return 0;
}