// ��Ʈ���� ������
// Bitwise Operators
// ����� �ڷ��� ������ ���������
// ��ǻ�ʹ� ��Ʈ ������ ����Ѵ�.

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
	cout << std::bitset<16>(a) << " " << a << endl; // ĳ�� ���� 8�� 8bit�� ǥ���ȴ�.
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