// 괄호 연산자 오버로딩과 함수 객체
// () parenthesis Function object (Functor)

#include <iostream>

using namespace std;

class Accumulator
{
private:
	int m_counter = 0;

public:
	int operator()(int i) { return (m_counter += i); }
};

int main()
{
	Accumulator acc;
	cout << acc(10) << endl;
	cout << acc(20) << endl;

	return 0;
}