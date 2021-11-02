//������ Constructors

#include <iostream>
using namespace std;

class Fraction
{
private: // ���⼭ �ٷ� ���� �����ڸ� ���� �ʱ�ȭ�� ������ �� �ִ�.
	int m_numerator;
	int m_denominator;

public:
	// �����Ϸ��� �����ڰ� ���� ��� ����Ʈ �����ڸ� ������ش�.
	// Fraction() { }

	// ��ȯ���� ���� Ŭ������ �̸��� ������ �������̴�.
	/*Fraction()
	{
		m_numerator = 3;
		m_denominator = 3;

		cout << "Fraction() constructor" << endl;
	}*/

	// �����ڸ� �ϳ��� ����� ����Ʈ �����ڰ� ��������� �ʴ´�.
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

public: // �����ڸ� private���ε� �ΰ� ����� �� �ִ�.
	First()
	{
		cout << "class First constructor()" << endl;
	}
};

int main()
{		
	// public�� ���� ������ ���
	//Fraction frac { 0, 1 };
	/*frac.m_numerator = 0;
	frac.m_denominator = 1;*/

	// ������ �����. �������� ��� �Ű������� ����Ʈ�� �ֵ��� �����Ѵ�.
	Fraction frac; // �������� �Ű������� ���� ��츸 ��ȣ�� ���� ����Ѵ�.
	frac.print();
	// �Ű������� ��� ����Ʈ���� �ִ� ��� ���ڸ� �ϳ��� ���� �����̸� �ν��Ͻ��� ��ȣ�� ���� �ȵȴ�.

	Fraction one_thirds{ 1, 3 }; // uniform initialization�� ���ݴ� �����ؼ� ����� �ڵ带 ������ �� ������ 
	//Fraction one_thirds(1, 3); // �׳� �����ϴٰ� �����ϰ� �Ѿ�� ���̴�.
	//Fraction one_thirds(1);
	//Fraction one_thirds;
	//Fraction one_thirds = Fraction{ 1,3 };//�������� �ʴ� ���
	one_thirds.print();


	First fir; // second�� ����̱⶧���� �켱������ �޸𸮸� �Ҵ��ؼ� ����� �����ڸ� ȣ���Ѵ�.

	return 0;
}