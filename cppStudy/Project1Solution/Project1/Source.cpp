// 프로그램을 실행시킨다는 것은 OS 운영체제에게 요청을 하는 것이다.
// 빈칸과 빈줄은 컴파일러가 무시를 한다.
#include <iostream> //# 붙은 것들을 전처리기라고 한다 preprocessor directive
// int는 출력 부분에 해당하며, 여기서는 정수의 약자인 int를 사용하였다.
int main(void) // OS는 프로그램을 받았을 때 main 함수를 찾는다.
{// main 함수의 몸체는 중괄호로 묶인다.

	1 + 1; // 세미 콜론으로 완전한 문장, statement가 된다.
	// expression : 계산식

	 // 변수, 정수형의 데이터를 받을 수 있는 메모리 공간을 할당 받은 것
	int x = 2; // 리터럴
	x = 5;
	int y = x + 3;


	// 요즘은 코드 자체를 문서처럼 다룬다.
	// 위에 주석 달기
	std::cout << y << std::endl;
	std::cout << 1 + 2 << std::endl;
	//std namespace 이름이 겹칠 수 있는 함수나 변수를 구분하기 위한 공간

	int sight = 10;
	//...
	// 마법의 물약을 먹어서 시야 거리가 0
	// statement를 보고서 직관적으로 알 수 있는 내용은 주석으로 달지 않는다.
	sight = 0;

	// 1 + 1 event
	int cost = num_items / 2 * price_per_item;

	return 0; // OS에게 출력값을 돌려준다. 반환한다.
	// 현재는 리턴만 기능을 수행하는데, 기능을 수행하는 줄을 statement라고 한다.
	// statement는 관습적으로 명령문이라고 말한다.
	// error C2143: syntax error: missing ';' before '}'
	// 에러가 있다면 항상 구글에 검색해보자.
}

// 주석 잘 다는 방법
// 주석은 컴파일러가 무시한다.
// 주석은 내가 왜 이 프로그램을 만드는지, 무엇을 하고 있는지 기록하는 것이다.
// 한줄 주석
/*영역 
주석*/
// 주석 단축키
// 주석 comments