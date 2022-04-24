#include "Calc.h"

// cpp 파일은 인클루드에 영향을 안주기 때문에
// using namespace를 이런식으로 써도 된다.
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

// 함수 이름에 커서를 두고 오른클릭
// Quick Actions and Refactorings...
// Move Definition Location을 하면 정의가 옮겨가고
// 팝업창에서 수정 후 esc누르면 된다.

void Calc::print()
{
	//using namespace std;
	cout << m_value << endl;
}

Calc::Calc(int init_value)
	: m_value(init_value)
{}
