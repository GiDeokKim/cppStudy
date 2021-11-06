// this �����Ϳ� ���� ȣ��
// Chaining Member Fuctions
// �� �ν��Ͻ��� ��� ���еɱ�?

#include <iostream>
using namespace std;

class Simple
{
private:
	int m_id;

public:
	Simple(int id)
	{
		/*(this->) �̰� ���� ����*/setID(id);
		//this->m_id;
		// �ڱ� �ڽ��� �ּҸ� ���
		cout << this << endl;
	}

	void	setID(int id) { m_id = id; } // ��� �ν��Ͻ��� �����ؼ� ����ϴ� �Լ�
	int		getID() { return m_id; }
};

// Chaining Member Fuctions
// �ֱ� �ٸ� ���� ���� ����ϳ� C++������ �̷��� �ؾ��ϴ����� �ǹ�
class Calc
{
private:
	int m_value;

public:
	Calc(int init_value)
		: m_value(init_value)
	{}

	/*void add(int value) { m_value += value; }
	void sub(int value) { m_value -= value; }
	void mult(int value) { m_value *= value; }*/
	Calc& add(int value) { m_value += value; return *this; }
	Calc& sub(int value) { m_value -= value; return *this; }
	Calc& mult(int value) { m_value *= value; return *this; }

	void print()
	{
		cout << m_value << endl;
	}
};


int main()
{
	Simple s1(1), s2(2);
	s1.setID(2);
	s2.setID(4);

	cout << &s1 << " " << &s2 << endl;

	// Simple::setID(&s1, 2); ���� ���´� �̷��� �ʰ� ���������� �̷� ����
	// setID�� �޸𸮻� �ϳ��� �����ϸ�
	// �� �ν��Ͻ��� ����ϴ� ���
	// �ش� �ν��Ͻ��� �ּҰ��� ��� setID�� ȣ���ع�����.





	Calc cal(10);

	/*cal.add(10);
	cal.sub(1);
	cal.mult(2);
	cal.print();*/

	cal.add(10).sub(1).mult(2).print();
	/*Calc& temp1 = cal.add(10);
	Calc& temp2 = cal.sub(1);
	Calc& temp3 = cal.mult(2);
	temp3.print();*/ // �̰� ���ٷ� �� ����
	// �ǿ뼺�� �� �𸣰ڴ�
	return 0;
}