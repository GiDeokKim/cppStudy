// ������ Integers
// ��Ʈ��ũ �迭�� �ٷ�� ������� char Ÿ���� 1 byte ���� �ڷ������� ����Ѵ�.
// long long 8 bytes. C99 / C++11 type
// int�� ���� �� �� ��Ʈ�� ��ȣ�� ����Ѵ�.
// ����� 0 ������ 1�� ��ȣ ��Ʈ�� ����Ѵ�.
// unsigned�� ��ȣ ��Ʈ ���� ��� ���ڸ� ǥ���� �� ����Ѵ�.

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


	// sizeof�� �ڷ����� ũ�⸦ �� �� �ִ�. ������ byte
	cout << sizeof(short) << endl;
	cout << sizeof(int) << endl;
	cout << sizeof(long) << endl; // int�� ���� 4 bytes�̴� �Ȱ��� �� �� ����.
	cout << sizeof(long long) << endl;

	cout << pow(2, sizeof(short) * 8 - 1/*��ȣ ǥ���� ���� -1*/) - 1/*0�� ���� -1*/<< endl;

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

	// �������� ���� ������ ������ �ϸ� �Ҽ��� �Ʒ��� ��������.

	return 0;
}