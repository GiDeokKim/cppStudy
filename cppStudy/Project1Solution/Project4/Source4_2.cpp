// 전역 변수, 정적 변수, 내부 연결, 외부 연결
// Global Variables, Static Variables, Internal Linkage, External Linkage

// 내부 연결
// 외부 연결

#include <iostream>
#include "My_const.h"
using namespace std;

// global variable
int value = 123;
//int a = 1; // main 함수에서도 a로 접근할 수 있다.

// 해당 cpp 안에서만 전역으로 사용하는 변수 다른 곳에서는 접근 불가능
static int static_global_variable = 1;

void doSomething()
{
	// 정적 변수(메모리가 static이다, 메모리가 정적으로 선언된다)
	// 이 함수가 몇번 호출되는지 디버깅해볼때 사용한다.
	// main 함수에서는 a로 접근할 수가 없다.
	static int a = 1; // 전역 변수 같지만 doSomething 블럭 안에서만 같은 메모리를 사용하게 된다.
	++a;
	cout << a << endl;
}

// forward declaration
// extern이 생략되어 있다.
/*extern*/ void doSomething2();
// 여러 cpp 안에서 다룰 수 있는 전역 변수
extern int exA; //1>Source4_2.obj : error LNK2001: unresolved external symbol "int exA" (?exA@@3HA)
//1>Source4_2_1.obj : error LNK2005: "int exA" (?exA@@3HA) already defined in Source4_2.obj

int main()
{

	// 전역 변수가 출력
	cout << value << endl;

	// name hiding
	int value = 1;

	// 영역 연산자(전역 변수를 출력시킨다)
	cout << ::value << endl;

	// 지역 변수가 출력
	cout << value << endl;

	cout << "정적 변수 테스트" << endl;
	// 정적 변수 테스트
	doSomething();
	doSomething();
	doSomething();
	doSomething();


	cout << "Linkage" << endl;

	doSomething2();
	cout << exA << endl;


	// 파이가 중복되게 존재한다. 메모리 낭비
	cout << "In main.cpp file" << Constants::pi << " " << &Constants::pi << endl;
	return 0;
}