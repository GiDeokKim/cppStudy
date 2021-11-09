// 익명 객체 anonymous
// 객체를 사용할 때 이름이 붙은 변수를 사용하지 않고 바로 사용하는 객체
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

	int getCents() const // 멤버 변수를 변경하지 않기 때문에 const가 붙는다.(멤버 함수에 붙는다.)
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

	//A().print(); // 생성자 소멸자 호출(변수로 만들지 않아서 바로 생성 파괴가 된다.)
	//A().print(); // 생성자 소멸자 호출

	A(1).print(); // 생성자 소멸자 호출
	A(2).print(); // 생성자 소멸자 호출

	cout << add(Cents(6), Cents(8)).getCents() << endl;

	return 0;
}