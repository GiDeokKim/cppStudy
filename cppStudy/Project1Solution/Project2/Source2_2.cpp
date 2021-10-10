// ������ Integers
// ��Ʈ��ũ �迭�� �ٷ�� ������� char Ÿ���� 1 byte ���� �ڷ������� ����Ѵ�.
// long long 8 bytes. C99 / C++11 type
// int�� ���� �� �� ��Ʈ�� ��ȣ�� ����Ѵ�.
// ����� 0 ������ 1�� ��ȣ ��Ʈ�� ����Ѵ�.
// unsigned�� ��ȣ ��Ʈ ���� ��� ���ڸ� ǥ���� �� ����Ѵ�.
// �������� ���� ������ ������ �ϸ� �Ҽ��� �Ʒ��� ��������.

#include <iostream>
#include <cmath>
#include <limits>

int main()
{
	using namespace std;

	// sizeof�� �ڷ����� ũ�⸦ �� �� �ִ�. ������ byte
	cout << sizeof(short)		<< endl; // 2 bytes = 2 * 8 bits = 16 bits
	cout << sizeof(int)			<< endl; // 4 bytes = 4 * 8 bits = 32 bits
	cout << sizeof(long)		<< endl; // 4 bytes = 4 * 8 bits = 32 bits
	cout << sizeof(long long)	<< endl; // 8 bytes = 8 * 8 bits = 64 bits
	// long�� int�� 4 bytes�̴� ���� ������ ���� �ٷ��.
	
	cout << "\n";

	// 32767
	cout << pow(2, sizeof(short) * 8 - 1/*��ȣ ǥ���� ���� -1*/) - 1/*0�� ���� -1*/<< endl;

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