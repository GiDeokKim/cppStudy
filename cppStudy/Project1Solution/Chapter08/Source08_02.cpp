// 캡슐화, 접근 지정자, 접근 함수
// Encapsulation, Access Specifiers, Access Functions
// 복잡해 보이는 것을 깔끔하게 정리를 하면 뛰어난 프로그래머가 될 수 있다.

#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Date
	//struct Date
{
	//public:		// access specifier(기본이 private)
	int m_month;
	int m_day;
	int m_year;
	// access specifier가 private면 어떻게 접근하는거야?!
	// 답: access functions를 만들자!

public: // 같은 클래스 멤버라면 public이라도 private 멤버에 접근할 수 있다.
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

	// int로만 해도 되지만 복사를 안하도록 만들기 위해 참조 연산자를 쓴다면
	// 수정을 못하게 const로 막아주자!
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

// 캡슐화를 안하고 클래스의 멤버를 외부에서 중구난방으로 사용하게 되면
// 멤버를 수정할 때 고생하게 된다.
// 하나하나 찾아서 고치기는 힘드니까...

int main()
{
	Date today; // { 8, 4, 2025}
	//today.m_month = 8;		// 클래스로 사용하는 경우 private(access specifier)가 기본 설정이라 에러가 뜸
	//today.m_day = 4;		// 클래스로 사용하는 경우 private(access specifier)가 기본 설정이라 에러가 뜸
	//today.m_year = 2025;	// 클래스로 사용하는 경우 private(access specifier)가 기본 설정이라 에러가 뜸
	today.setDate(8, 4, 2025);
	today.setMonth(10);

	cout << today.getDay() << endl;

	Date copy;
	copy.copyFrom(today);
	// copy 인스턴스의 멤버함수로 today 인스턴스의 private 멤버 변수를 접근할 수 있을까?
	// 같은 클래스의 다른 인스턴스의 private에는 접근할 수 있다.

	cout << copy.getDay() << endl;

	return 0;
}