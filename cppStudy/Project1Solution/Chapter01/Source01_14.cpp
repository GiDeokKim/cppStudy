// 전처리기와의 첫 만남
// Preprocessor

#include <iostream>

using namespace std;

// 매크로 코드 내에 존재할 경우 정의한 것으로 교체하는 작업을 한다.
// 매크로로 함수를 만드는 것은 추천하지 않는다.(너무나 많은 괄호 치기)
#define MY_NUMBER 333
#define MAX(a, b) (((a)>(b)) ? (a) : (b))

#include <algorithm> // max 함수를 쓰고 싶으면 해당 라이브러리를 쓰자

// 전처리기 안에서는 정의한 것으로 교체하는 작업을 안하므로 뒤에 정의할 필요가 없다.
// 이 매크로는 작성된 파일 내에서만 영향력을 가진다.(#include로 끌어 쓰는게 아니라면)
#define LIKE_APPLE 

// 다른 코드에 정의되어 있는 함수
void doSomething();

int main()
{
	cout << MY_NUMBER << endl;

	cout << std::max(1, 2) << endl;

#ifdef LIKE_APPLE
	cout << "Apple " << endl;
#endif

#ifndef LIKE_APPLE
	cout << "Orange " << endl;
#endif

#ifdef LIKE_APPLE
	cout << "Apple " << endl;
#else
	cout << "Orange " << endl;
#endif

	doSomething();

	return 0;
}
