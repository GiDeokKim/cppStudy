// 정적 멤버 변수

#include <iostream>

using namespace std;

class Something
{
public:
	// error C2864: 'Something::m_value': a static data member with an in-class initializer must have non-volatile const integral type or be specified as 'inline'
	//static int s_value; // = 1; static 멤버 변수는 초기화가 불가능하다.
	static const int s_value = 1; //constexpr는 컴파일 타임에 값이 결정되어야함 const는 런타임에서도 가능



};

//int Something::s_value = 1; // define in cpp 헤더파일에 두면 중복 선언으로 문제 생김 static const일 경우 사용 불가

int main()
{
	// 인스턴스가 없어도 존재함
	cout << &Something::s_value << " " << Something::s_value << endl;

	Something st1;
	Something st2;

	//st1.s_value = 2; //static const일 경우 사용 불가

	// static일 경우 주소와 값이 같아짐 아니면 서로 다름
	cout << &st1.s_value << " " << st1.s_value << endl;
	cout << &st2.s_value << " " << st2.s_value << endl;

	//Something::s_value = 1234; //static const일 경우 사용 불가
	cout << &Something::s_value << " " << Something::s_value << endl;

	return 0;
}