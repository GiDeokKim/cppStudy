// 증감 연산자 오버로딩
// 전위 및 후위

#include <iostream>
using namespace std;

class Digit
{
private:
	int m_digit;

public:
	Digit(int digit = 0) :m_digit(digit) {}

	// prefix
	Digit& operator ++ ()
	{
		++m_digit;

		return *this;
	}

	// postfix
	Digit operator ++ (int) // 더미 매개변수
	{
		Digit temp(m_digit);

		++(*this);

		return temp;
	}

	friend ostream& operator << (ostream& out, const Digit& d)
	{
		out << d.m_digit;
		return out;
	}
};


int main()
{
	Digit d(5);

	cout << ++d << endl;
	cout << d << endl;

	cout << d++ << endl;
	cout << d << endl;

	return 0;
}