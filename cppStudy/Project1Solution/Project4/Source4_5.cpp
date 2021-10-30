// �Ͻ��� ����ȯ(Implicit Type Conversion(coersion))
// ����� ����ȯ(Explicit Type Conversion(casting))

#include <iostream>
#include <typeinfo>
#include <iomanip>

int main()
{
	using namespace std;

	int a1 = 123.0; // warning C4244: 'initializing': conversion from 'double' to 'int', possible loss of data
	cout << typeid(a1).name() << endl;


	float a = 1.0f;
	double d = a;

	// numeric conversion
	double dd = 3;
	short s = 2;
	int i = 30000;
	char c = i;

	cout << static_cast<int>(c) << endl;
	double ddd = 0.123456789;
	float ff = ddd;
	cout << std::setprecision(12) << ff << endl;
	cout << std::setprecision(12) << ddd << endl;

	cout << 5u - 10 << endl; // overflow�� �����

	// ���ݱ����� �Ͻ��� ����ȯ�̾���
	// numeric promotion�� numeric conversion�� �Ѵ� �Ͻ��� ����ȯ������ �ٸ���. ã�ƺ���

	int iiii = int(4.0); // c++ style
	iiii = (int)4.0; // c style
	iiii = static_cast<int>(4.0); // �ֽ�



	return 0;
}
