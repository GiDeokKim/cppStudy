// 형변환을 오버로딩 하기

#include <iostream>
using namespace std;

class Cents
{
private:
	int m_cents;

public:
	Cents(int cents = 0)
	{
		m_cents = cents;
	}

	int getCents() { return m_cents; }
	void setCents(int cents) { m_cents = cents; }

	operator int()
	{
		cout << "cast here" << endl;
		return m_cents;
	}
};

class Dollar
{
private:
	int m_dollars = 0;

public:
	Dollar(const int& input) :m_dollars(input) {}

	operator Cents()
	{
		return Cents(m_dollars * 100);
	}

};

void printInt(const int& value)
{
	cout << value << endl;
}

int main()
{
	//1
	Cents cents(7);
	printInt(cents);


	//2
	int value = (int)cents;
	value = int(cents);
	value = static_cast<int>(cents);

	//3
	Dollar dol(2);
	Cents cents2 = dol;
	printInt(cents2);

	return 0;
}