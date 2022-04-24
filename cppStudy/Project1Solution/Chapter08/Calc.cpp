#include "Calc.h"

// cpp ������ ��Ŭ��忡 ������ ���ֱ� ������
// using namespace�� �̷������� �ᵵ �ȴ�.
using namespace std;

Calc& Calc::add(int value)
{
	m_value += value;
	return *this;
}

Calc& Calc::sub(int value)
{
	m_value -= value;
	return *this;
}

Calc& Calc::mult(int value)
{
	m_value *= value;
	return *this;
}

// �Լ� �̸��� Ŀ���� �ΰ� ����Ŭ��
// Quick Actions and Refactorings...
// Move Definition Location�� �ϸ� ���ǰ� �Űܰ���
// �˾�â���� ���� �� esc������ �ȴ�.

void Calc::print()
{
	//using namespace std;
	cout << m_value << endl;
}

Calc::Calc(int init_value)
	: m_value(init_value)
{}
