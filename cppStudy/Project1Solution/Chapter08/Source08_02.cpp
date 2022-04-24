// ĸ��ȭ, ���� ������, ���� �Լ�
// Encapsulation, Access Specifiers, Access Functions
// ������ ���̴� ���� ����ϰ� ������ �ϸ� �پ ���α׷��Ӱ� �� �� �ִ�.

#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Date
	//struct Date
{
	//public:		// access specifier(�⺻�� private)
	int m_month;
	int m_day;
	int m_year;
	// access specifier�� private�� ��� �����ϴ°ž�?!
	// ��: access functions�� ������!

public: // ���� Ŭ���� ������ public�̶� private ����� ������ �� �ִ�.
	void setDate(const int& month_input, const int& day_input, const int& year_input)
	{
		m_month = month_input;
		m_day = day_input;
		m_year = year_input;
	}

	void setMonth(const int& month_input)
	{
		m_month = month_input;
	}

	// int�θ� �ص� ������ ���縦 ���ϵ��� ����� ���� ���� �����ڸ� ���ٸ�
	// ������ ���ϰ� const�� ��������!
	const int& getDay() // getters
	{
		return m_day;
	}

	void copyFrom(const Date& original)
	{
		m_month = original.m_month;
		m_day = original.m_day;
		m_year = original.m_year;
	}
};

// ĸ��ȭ�� ���ϰ� Ŭ������ ����� �ܺο��� �߱��������� ����ϰ� �Ǹ�
// ����� ������ �� ����ϰ� �ȴ�.
// �ϳ��ϳ� ã�Ƽ� ��ġ��� ����ϱ�...

int main()
{
	Date today; // { 8, 4, 2025}
	//today.m_month = 8;		// Ŭ������ ����ϴ� ��� private(access specifier)�� �⺻ �����̶� ������ ��
	//today.m_day = 4;		// Ŭ������ ����ϴ� ��� private(access specifier)�� �⺻ �����̶� ������ ��
	//today.m_year = 2025;	// Ŭ������ ����ϴ� ��� private(access specifier)�� �⺻ �����̶� ������ ��
	today.setDate(8, 4, 2025);
	today.setMonth(10);

	cout << today.getDay() << endl;

	Date copy;
	copy.copyFrom(today);
	// copy �ν��Ͻ��� ����Լ��� today �ν��Ͻ��� private ��� ������ ������ �� ������?
	// ���� Ŭ������ �ٸ� �ν��Ͻ��� private���� ������ �� �ִ�.

	cout << copy.getDay() << endl;

	return 0;
}