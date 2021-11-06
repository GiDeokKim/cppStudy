#pragma once
#include <iostream>

// 헤더에서 using namespace를 쓰면
// 인클루드하는 모든 파일에 영향을 주므로
// 영역을 최대한 작게 잡아서 쓸 수 있게 
// 코드를 구성해야 한다.

class Calc
{
private:
	int m_value;

public:
	Calc(int init_value);

	Calc& add(int value);
	Calc& sub(int value);
	Calc& mult(int value);

	// 함수 이름에 커서를 두고 오른클릭
	// Quick Actions and Refactorings...
	// Move Definition Location을 하면 정의가 옮겨가고
	// 팝업창에서 수정 후 esc누르면 된다.
	void print();
};