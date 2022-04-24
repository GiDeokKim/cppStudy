// 위임 생성자
// Delegating Consturctors
// 생성자가 다른 생성자를 사용하는 것

#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
	int		m_id;
	string	m_name;

public:
	Student(const string& name_in)
		//: m_id(0), m_name(name_in)
		: Student(0, name_in) // 위임 생성자(C++ 11부터 가능)
	{
		//init(0, name_in); // 위임 생성자 혹은 이 방식으로 구현
	}

	Student(const int& id_in, const string& name_in)
		: m_id(id_in), m_name(name_in)
	{
		//init(0, name_in);
	}

	// 초기화 함수를 별도로 구현
	void init(const int& id_in, const string& name_in)
	{
		m_id = id_in;
		m_name = name_in;
	}

	void print()
	{
		cout << m_id << " " << m_name << endl;
	}
};

int main()
{
	Student st1(0, "Jack");
	st1.print();

	Student st2("Dash");
	st2.print();

	return 0;
}