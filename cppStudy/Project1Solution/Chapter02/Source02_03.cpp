// C++ 11���ʹ� � �÷����̴��� ���� �ʺ� ������ �� �� �ְ� ������ �� ����(Fixed-width integers)
//#include <cstdint> // iostream�� include�� ��� ������ ����� �ʿ䰡 ����
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