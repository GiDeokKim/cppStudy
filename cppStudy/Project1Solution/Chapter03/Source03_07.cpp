// ������ Binary Numbers

#include <iostream>

int main()
{
	using namespace std;

	// ������ : 337			= 300 + 30 + 7 = 3 * 10^2 + 3 * 10^1 + 7 * 10^0
	// ������ : 0101 1110	= 0 * 2^7 + 1 * 2^6 + 0 * 2^5 + 1 * 2^4 + 1 * 2^3 + 1 * 2^2 + 1 * 2^1 + 0 * 2^0
	//						= 0 * 128 + 1 * 64 + 0 * 32 + 1 * 16 + 1 * 8 + 1 * 4 + 1 * 2 + 0 * 1
	//						= 64 + 16 + 8 + 4 + 2

	// ���� complement
	// -5�� ���ϴ� �� : 5�� �������� ǥ���ϰ� ������ ��ȯ�� �� 1�� �����ش�.
	// 1�� �����ִ� ������ 0�� 1���� �������� ǥ���ϱ� ���ؼ��̴�.
	// 0000 0000
	// 1111 1111 complement
	// 0000 0000 1�� ���� ���

	return 0;
}