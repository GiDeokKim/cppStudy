// �͸� ��ü anonymous
// ��ü�� ����� �� �̸��� ���� ������ ������� �ʰ� �ٷ� ����ϴ� ��ü
#include <iostream>

using namespace std;

class A
{
public:
	int m_value;

	A(const int& input)
		: m_value(input)
	{
		cout << "Constructor" << endl;
	}

	~A()
	{
		cout << "Destructor" << endl;
	}

	void print()
	{
		//cout << "Hello" << endl;
		cout << m_value << endl;
	}
};

class Cents
{
private:
	int m_cents;

public:
	Cents(int cents) 
	{
		m_cents = cents;
	}

	int getCents() const // ��� ������ �������� �ʱ� ������ const�� �ٴ´�.(��� �Լ��� �ٴ´�.)
	{
		return m_cents;
	}
};

Cents add(const Cents& c1, const Cents& c2)
{
	return Cents(c1.getCents() + c2.getCents());
}

int main()
{
	//A a;
	//a.print();

	//A().print(); // ������ �Ҹ��� ȣ��(������ ������ �ʾƼ� �ٷ� ���� �ı��� �ȴ�.)
	//A().print(); // ������ �Ҹ��� ȣ��

	A(1).print(); // ������ �Ҹ��� ȣ��
	A(2).print(); // ������ �Ҹ��� ȣ��

	cout << add(Cents(6), Cents(8)).getCents() << endl;

	return 0;
}