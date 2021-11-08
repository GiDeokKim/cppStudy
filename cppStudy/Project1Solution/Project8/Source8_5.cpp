// ���� ������
// Delegating Consturctors
// �����ڰ� �ٸ� �����ڸ� ����ϴ� ��

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
		: Student(0, name_in) // ���� ������(C++ 11���� ����)
	{
		//init(0, name_in); // ���� ������ Ȥ�� �� ������� ����
	}

	Student(const int& id_in, const string& name_in)
		: m_id(id_in), m_name(name_in)
	{
		//init(0, name_in);
	}

	// �ʱ�ȭ �Լ��� ������ ����
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