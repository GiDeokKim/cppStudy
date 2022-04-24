// this 포인터와 연쇄 호출
// Chaining Member Fuctions
// 각 인스턴스는 어떻게 구분될까?

#include <iostream>
using namespace std;

class Simple
{
private:
	int m_id;

public:
	Simple(int id)
	{
		/*(this->) 이게 숨어 있음*/setID(id);
		//this->m_id;
		// 자기 자신의 주소를 출력
		cout << this << endl;
	}

	void	setID(int id) { m_id = id; } // 모든 인스턴스가 공유해서 사용하는 함수
	int		getID() { return m_id; }
};

// Chaining Member Fuctions
// 최근 다른 언어에서 많이 사용하나 C++에서도 이렇게 해야하는지는 의문
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

	// Simple::setID(&s1, 2); 실제 형태는 이렇지 않고 개념적으로 이런 구성
	// setID는 메모리상 하나만 존재하며
	// 각 인스턴스가 사용하는 경우
	// 해당 인스턴스의 주소값을 들고서 setID를 호출해버린다.





	Calc cal(10);

	/*cal.add(10);
	cal.sub(1);
	cal.mult(2);
	cal.print();*/

	cal.add(10).sub(1).mult(2).print();
	/*Calc& temp1 = cal.add(10);
	Calc& temp2 = cal.sub(1);
	Calc& temp3 = cal.mult(2);
	temp3.print();*/ // 이게 한줄로 된 형태
	// 실용성은 잘 모르겠다
	return 0;
}