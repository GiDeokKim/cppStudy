// C++ 11부터는 고정 너비 정수가 생김(Fixed-width integers
//#include <cstdint> // iostream을 include할 경우 별도로 사용할 필요가 없음
#include <iostream>

int main()
{
	using namespace std;

	int16_t i(5);
	int8_t myint = 65;

	cout << myint << endl;

	int_fast8_t fi(5);
	int_least64_t fl(5);
}