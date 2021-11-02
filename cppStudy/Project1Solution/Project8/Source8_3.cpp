//생성자 Constructors

#include <iostream>
using namespace std;

class Fraction
{
private: // 여기서 바로 대입 연산자를 통해 초기화를 구현할 수 있다.
	int m_numerator;
	int m_denominator;

public:
	// 컴파일러는 생성자가 없을 경우 디폴트 생성자를 만들어준다.
	// Fraction() { }

	// 반환값이 없고 클래스와 이름이 같으면 생성자이다.
	/*Fraction()
	{
		m_numerator = 3;
		m_denominator = 3;

		cout << "Fraction() constructor" << endl;
	}*/

	// 생성자를 하나라도 만들면 디폴트 생성자가 만들어지지 않는다.
	Fraction(const int& num_in = 0, const int& den_in = 2)
	{
		m_numerator = num_in;
		m_denominator = den_in;

		cout << "Fraction() constructor" << endl;
	}

	void print()
	{
		cout << m_numerator << " / " << m_denominator << endl;
	}
};

class Second
{
public:
	Second()
	{
		cout << "class Second constructor()" << endl;
	}
};

class First
{
	Second sec;

public: // 생성자를 private으로도 두고 사용할 수 있다.
	First()
	{
		cout << "class First constructor()" << endl;
	}
};

int main()
{		
	// public일 떄만 가능한 경우
	//Fraction frac { 0, 1 };
	/*frac.m_numerator = 0;
	frac.m_denominator = 1;*/

	// 빨간줄 생긴다. 생성자의 모든 매개변수를 디폴트값 주도록 구현한다.
	Fraction frac; // 생성자의 매개변수가 없는 경우만 괄호를 없이 사용한다.
	frac.print();
	// 매개변수가 모두 디폴트값이 있는 경우 인자를 하나도 안줄 생각이면 인스턴스에 괄호를 쓰면 안된다.

	Fraction one_thirds{ 1, 3 }; // uniform initialization이 조금더 엄격해서 깔끔한 코드를 구현할 수 있지만 
	//Fraction one_thirds(1, 3); // 그냥 유사하다고 생각하고 넘어가는 편이다.
	//Fraction one_thirds(1);
	//Fraction one_thirds;
	//Fraction one_thirds = Fraction{ 1,3 };//권장하지 않는 방식
	one_thirds.print();


	First fir; // second가 멤버이기때문에 우선적으로 메모리를 할당해서 만들고 생성자를 호출한다.

	return 0;
}