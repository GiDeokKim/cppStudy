// 변환 생성자 Converting constructor
// explicit, delete

#include <iostream>
#include <cassert>

using namespace std;

class Fraction
{
private:
	int m_numerator;
	int m_denominator;

public:
	Fraction(char) = delete;

	/*explicit*/ Fraction(int num = 0, int den = 1)
		: m_numerator(num), m_denominator(den)
	{
		assert(den != 0);
	}

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

void doSomething(Fraction frac)
{
	cout << frac << endl;
}

int main()
{
	Fraction frac(7);

	doSomething(frac);
	doSomething(Fraction(7));

	//Converting constructor 동작
	doSomething(7); //explicit 키워드로 막아버릴 수 있음

	// 이전엔 존재한 함수지만 버전업되면서 사용하지 않을 경우
	// 강력하게 막아버리기 위해 delete를 사용한다.
	Fraction frac2('c');

	return 0;
}