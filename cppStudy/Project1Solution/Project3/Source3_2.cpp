// 산술 연산자
// arithmetic operators

#include <iostream>

int main()
{
	using namespace std;

	int x = 1;

	// 단항 연산자 +, -
	int unaryOperatorMinus	= -x;
	int unaryOperatorPlus	= +x;

	// 이항 연산자 +, -, *, /, %
	int operand1 = 7;
	int operand2 = 4;

	// c++ 11부터는 소수점 아래를 절삭하기로 했음
	cout << operand1 / operand2					<< endl; // return  1
	cout << float(operand1) / operand2			<< endl; // return  1.75
	cout << operand1 / float(operand2)			<< endl; // return  1.75
	cout << float(operand1) / float(operand2)	<< endl; // return  1.75
	
	cout << -5	/  2	<< endl; // return -2
	cout << -5	%  2	<< endl; // return -1
	cout << -5	% -2	<< endl; // return -1
	cout <<  5	% -2	<< endl; // return  1

	// 복합 연산자
	// 코딩 작업 내용을 줄여준다.
	// 실수를 줄여준다. 보기가 편해진다.
	operand2 += operand1;

	return 0;
}