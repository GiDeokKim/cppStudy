// 산술 연산자 오버로딩 하기
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


/* 요즘 추세는 return을 void로 두지 않는 것
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

/* 산술 연산자 오버로딩
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
	cout << (cents1 + cents2 + Cents(6)).getCents() << endl; // 익명 개체

	return 0;
}//*/

/* 산술 연산자 오버로딩2
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

	cout << (cents1 + cents2 + Cents(6)).getCents() << endl; // 익명 개체

	return 0;
}//*/

/* 산술 연산자 오버로딩3
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

	cout << (cents1 + cents2 + Cents(6)).getCents() << endl; // 익명 개체

	return 0;
}//*/

// ?: :: sizeof . .* 전부 연산자 오버로딩이 안된다.
// 오버로딩해도 연산자 우선순위는 그대로 유지된다.
// ^는 우선순위가 너무 낮아서 괄호를 잘써줘야한다. 오버로딩 안하는게 더 나음

///* 산술 연산자 오버로딩4
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

	// =, [], (), -> 멤버 함수로만 오버로딩이 가능함
};

int main()
{
	Cents cents1(6);
	Cents cents2(8);

	cout << (cents1 + cents2 + Cents(6)).getCents() << endl; // 익명 개체

	return 0;
}//*/