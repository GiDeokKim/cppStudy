#pragma once
#include <iostream>

// ������� using namespace�� ����
// ��Ŭ����ϴ� ��� ���Ͽ� ������ �ֹǷ�
// ������ �ִ��� �۰� ��Ƽ� �� �� �ְ� 
// �ڵ带 �����ؾ� �Ѵ�.

class Calc
{
private:
	int m_value;

public:
	Calc(int init_value);

	Calc& add(int value);
	Calc& sub(int value);
	Calc& mult(int value);

	// �Լ� �̸��� Ŀ���� �ΰ� ����Ŭ��
	// Quick Actions and Refactorings...
	// Move Definition Location�� �ϸ� ���ǰ� �Űܰ���
	// �˾�â���� ���� �� esc������ �ȴ�.
	void print();
};