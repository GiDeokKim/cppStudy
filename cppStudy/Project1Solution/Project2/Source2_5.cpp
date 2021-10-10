// 부동소수점수 floating point numbers
// 점이 떠다닌다. 100 -> 1.0 * 10^2
// float는 딥러닝에서 자주 쓰고
// 기본 실수 계산은 double을 선호한다.
// float double long double
// 부호 + 지수 + 가수
// sign exponent mantissa

#include <iostream>
#include <iomanip> // 입출력 조작
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
	cout << d2 << endl; // 콘솔창에서 표기된 수는 setprecision으로 정확히 보는게 아닌 이상 믿을 수 없다.

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