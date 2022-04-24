// ��� ������ �����ε� �ϱ�
// overloading

#include <iostream>

using namespace std;

//class Cents
//{
//private:
//	int m_cents;
//
//public:
//	Cents(int cents = 0) { m_cents = cents; }
//	int getCents() const { return m_cents; }
//	int& getCents() { return m_cents; }
//};
//
//void add(const Cents& c1, const Cents& c2, Cents& c_out)
//{
//	c_out.getCents() = c1.getCents() + c2.getCents();
//}
//
//int main()
//{
//	Cents cents1(6);
//	Cents cents2(8);
//
//	Cents sum;
//	add(cents1, cents2, sum);
//
//	cout << sum.getCents() << endl;
//
//	return 0;
//}


/* ���� �߼��� return�� void�� ���� �ʴ� ��
class Cents
{
private:
	int m_cents;

public:
	Cents(int cents = 0) { m_cents = cents; }
	int getCents() const { return m_cents; }
	int& getCents() { return m_cents; }
};

Cents add(const Cents& c1, const Cents& c2)
{
	return c1.getCents() + c2.getCents();
}

int main()
{
	Cents cents1(6);
	Cents cents2(8);

	cout << add(cents1, cents2).getCents() << endl;

	return 0;
}//*/

/* ��� ������ �����ε�
class Cents
{
private:
	int m_cents;

public:
	Cents(int cents = 0) { m_cents = cents; }
	int getCents() const { return m_cents; }
	int& getCents() { return m_cents; }
};

Cents operator + (const Cents& c1, const Cents& c2)
{
	return Cents(c1.getCents() + c2.getCents());
}

int main()
{
	Cents cents1(6);
	Cents cents2(8);

	cout << (cents1 + cents2).getCents() << endl;
	cout << (cents1 + cents2 + Cents(6)).getCents() << endl; // �͸� ��ü

	return 0;
}//*/

/* ��� ������ �����ε�2
class Cents
{
private:
	int m_cents;

public:
	Cents(int cents = 0) { m_cents = cents; }
	int getCents() const { return m_cents; }
	int& getCents() { return m_cents; }

	friend Cents operator + (const Cents& c1, const Cents& c2);
};

Cents operator + (const Cents& c1, const Cents& c2)
{
	return Cents(c1.getCents() + c2.getCents());
}

int main()
{
	Cents cents1(6);
	Cents cents2(8);

	cout << (cents1 + cents2 + Cents(6)).getCents() << endl; // �͸� ��ü

	return 0;
}//*/

/* ��� ������ �����ε�3
class Cents
{
private:
	int m_cents;

public:
	Cents(int cents = 0) { m_cents = cents; }
	int getCents() const { return m_cents; }
	int& getCents() { return m_cents; }

	friend Cents operator + (const Cents& c1, const Cents& c2)
	{
		return Cents(c1.getCents() + c2.getCents());
	}
};

int main()
{
	Cents cents1(6);
	Cents cents2(8);

	cout << (cents1 + cents2 + Cents(6)).getCents() << endl; // �͸� ��ü

	return 0;
}//*/

// ?: :: sizeof . .* ���� ������ �����ε��� �ȵȴ�.
// �����ε��ص� ������ �켱������ �״�� �����ȴ�.
// ^�� �켱������ �ʹ� ���Ƽ� ��ȣ�� �߽�����Ѵ�. �����ε� ���ϴ°� �� ����

///* ��� ������ �����ε�4
class Cents
{
private:
	int m_cents;

public:
	Cents(int cents = 0) { m_cents = cents; }
	int getCents() const { return m_cents; }
	int& getCents() { return m_cents; }

	Cents operator + (const Cents& c2)
	{
		return Cents(this->m_cents + c2.getCents());
	}

	// =, [], (), -> ��� �Լ��θ� �����ε��� ������
};

int main()
{
	Cents cents1(6);
	Cents cents2(8);

	cout << (cents1 + cents2 + Cents(6)).getCents() << endl; // �͸� ��ü

	return 0;
}//*/