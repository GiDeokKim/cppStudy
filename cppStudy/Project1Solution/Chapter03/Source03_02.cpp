// ��� ������
// arithmetic operators

#include <iostream>

int main()
{
	using namespace std;

	int x = 1;

	// ���� ������ +, -
	int unaryOperatorMinus	= -x;
	int unaryOperatorPlus	= +x;

	// ���� ������ +, -, *, /, %
	int operand1 = 7;
	int operand2 = 4;

	// c++ 11���ʹ� �Ҽ��� �Ʒ��� �����ϱ�� ����
	cout << operand1 / operand2					<< endl; // return  1
	cout << float(operand1) / operand2			<< endl; // return  1.75
	cout << operand1 / float(operand2)			<< endl; // return  1.75
	cout << float(operand1) / float(operand2)	<< endl; // return  1.75
	
	cout << -5	/  2	<< endl; // return -2
	cout << -5	%  2	<< endl; // return -1
	cout << -5	% -2	<< endl; // return -1
	cout <<  5	% -2	<< endl; // return  1

	// ���� ������
	// �ڵ� �۾� ������ �ٿ��ش�.
	// �Ǽ��� �ٿ��ش�. ���Ⱑ ��������.
	operand2 += operand1;

	return 0;
}