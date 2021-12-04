// ��ȯ ������ Converting constructor
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

	//Converting constructor ����
	doSomething(7); //explicit Ű����� ���ƹ��� �� ����

	// ������ ������ �Լ����� �������Ǹ鼭 ������� ���� ���
	// �����ϰ� ���ƹ����� ���� delete�� ����Ѵ�.
	Fraction frac2('c');

	return 0;
}