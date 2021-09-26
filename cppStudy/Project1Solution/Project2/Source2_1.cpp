#include <iostream>
#include <bitset>

int main()
{
	using namespace std;

	int i = -1;		// 4 bytes

	// char�� Character type�̱⵵ �ϰ� Integer type�̱⵵ �ϴ�.
	// ���ڸ� �����ϰ� ������ �ش� ���ڸ� ���ڷ� �� �� �ֱ� �����̴�. ex) 'A' == 65
	char a = 'H';	// 1 byte

	cout << (uintptr_t)static_cast<void*>(&i) << endl;
	cout << (uintptr_t)static_cast<void*>(&a) << endl;

	// ��ȣ ������ ���� �޶���.
	// Ư���� ��Ȳ������ ���� �ӵ��� ���̳�.
	signed int		i1	= -1;
	unsigned int	ui1 = 1;
	unsigned		ui2 = 2;

	// Floating-point types
	float	f1 = 1.0f;	// 4 bytes
	double	d1 = 1.0;	// 8 bytes
	long double ld1 = 1.0;

	// Modern C++
	auto aValue = 3.14; // ������ �ܰ迡�� �ڷ����� �����ȴ�.
	auto aValue2 = 3.14f;

	// c++������ ���� �ʱ�ȭ�ϴ� ����� 3������ �ִ�.
	int a1 = 123;		// copy		initialization �ڵ����� Ÿ�� ĳ������ �Ѵ�.
	int a2((int)3.14);	// direct	initialization ��ü ���� �� ���� ����Ѵ�. �ڵ����� Ÿ�� ĳ������ �Ѵ�. ������ ���ش�.
	int a3{ 123 };		// uniform	initialization ��ü ���� �� ���� ����Ѵ�.(�ֱ� ���� ����, ���� �� �����ϴ�.) ������ �����ش�.

	// �̷��� ���������� �������� �ʴ� ����̴�.
	int k, l, m = 123, p = 456;

	// �������� ��� ������ ó���� �� ����ǵ��� �ڵ带 �ۼ��ؾ� ������ ����� ����ϴ� ������ �����Ѵ�.
	return 0;
}