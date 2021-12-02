// 복사 생성자, 복사 초기화, Return Value Optimization

#include <iostream>
#include <cassert>

using namespace std;

class Fraction
{
private:
	int m_numerator;
	int m_denominator;

public:
	Fraction(int num = 0, int den = 1)
		: m_numerator(num), m_denominator(den)
	{
		assert(den != 0);
	}

	// private으로 옮기면 외부에서 사용 못함
	Fraction(const Fraction& fraction) // copy constructor
		: m_numerator(fraction.m_numerator), m_denominator(fraction.m_denominator)
	{
		cout << "Copy constructor called" << endl;
	}

	friend std::ostream& operator << (std::ostream& out, const Fraction& f)
	{
		out << f.m_numerator << " / " << f.m_denominator << endl;
		return out;
	}
};

Fraction doSomething()
{
	Fraction temp(1, 2);
	cout << &temp << endl;
	return temp;
}

int main()
{
	Fraction frac(3, 5);

	Fraction fr_copy(frac);

	cout << frac << fr_copy << endl;

	//2
	Fraction fr_copy2 = frac;

	cout << frac << fr_copy2 << endl;

	//3
	Fraction fr_copy3(Fraction(3, 10));

	cout << frac << fr_copy3 << endl;

	//4 release와 debug 모드 결과가 다름 반환값 최적화
	Fraction result = doSomething();
	cout << &result << endl;
	cout << result << endl;
	return 0;
}