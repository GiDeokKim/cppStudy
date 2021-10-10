// �ε��Ҽ����� floating point numbers
// ���� ���ٴѴ�. 100 -> 1.0 * 10^2
// float�� �����׿��� ���� ����
// �⺻ �Ǽ� ����� double�� ��ȣ�Ѵ�.
// float double long double
// ��ȣ + ���� + ����
// sign exponent mantissa

#include <iostream>
#include <iomanip> // ����� ����
#include <limits>
#include <cmath>

int main()
{
	using namespace std;

	float f(3.141592f);
	double d(3.141592);
	long double ld(3.141592);

	cout << sizeof(float) << endl;
	cout << sizeof(d) << endl;
	cout << sizeof(ld) << endl;

	cout << numeric_limits<float>::max() << endl; // min() lowest()
	cout << numeric_limits<double>::max() << endl;
	cout << numeric_limits<long double>::max() << endl;

	// scientific notation
	cout << 3.14 << endl;
	cout << 31.4e-1 << endl;
	cout << 31.4e-2 << endl;
	cout << 31.4e1 << endl;
	cout << 31.4e2 << endl;

	//cout << std::setprecision(16);
	cout << 1.0 / 3.0 << endl;

	float f1 = 123456789.0f; // 10 significant digits
	cout << f1 << endl;

	double d1 = 1.0;
	cout << d1 << endl;
	cout << std::setprecision(17);
	cout << d1 << endl;
	cout << std::setprecision(30);
	cout << d1 << endl;

	double d2 = 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1;
	cout << d2 << endl; // �ܼ�â���� ǥ��� ���� setprecision���� ��Ȯ�� ���°� �ƴ� �̻� ���� �� ����.

	double zero = 0.0;
	double posinf = 5.0 / zero;
	double neginf = -5.0 / zero;
	double nan = zero / zero;

	cout << posinf << endl;
	cout << neginf << endl;
	cout << nan << endl; // -nan(ind) indeterminate
	cout << posinf << " " << std::isinf(posinf) << endl;
	cout << neginf << " " << std::isinf(neginf) << endl;
	cout << nan << " " << std::isnan(nan) << endl;
	cout << 1.0 << " " << std::isnan(1.0) << endl;

	return 0;
}