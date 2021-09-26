#include <iostream>
#include <bitset>

int main()
{
	using namespace std;

	int i = -1;		// 4 bytes

	// char은 Character type이기도 하고 Integer type이기도 하다.
	// 문자를 저장하고 있지만 해당 문자를 숫자로 볼 수 있기 때문이다. ex) 'A' == 65
	char a = 'H';	// 1 byte

	cout << (uintptr_t)static_cast<void*>(&i) << endl;
	cout << (uintptr_t)static_cast<void*>(&a) << endl;

	// 부호 유무에 따라 달라짐.
	// 특수한 상황에서는 연산 속도도 차이남.
	signed int		i1	= -1;
	unsigned int	ui1 = 1;
	unsigned		ui2 = 2;

	// Floating-point types
	float	f1 = 1.0f;	// 4 bytes
	double	d1 = 1.0;	// 8 bytes
	long double ld1 = 1.0;

	// Modern C++
	auto aValue = 3.14; // 컴파일 단계에서 자료형이 결정된다.
	auto aValue2 = 3.14f;

	// c++에서는 변수 초기화하는 방법이 3가지가 있다.
	int a1 = 123;		// copy		initialization 자동으로 타입 캐스팅을 한다.
	int a2((int)3.14);	// direct	initialization 객체 지향 때 많이 사용한다. 자동으로 타입 캐스팅을 한다. 컴파일 해준다.
	int a3{ 123 };		// uniform	initialization 객체 지향 때 많이 사용한다.(최근 권장 사항, 조금 더 엄격하다.) 컴파일 안해준다.

	// 이렇게 가능하지만 권장하지 않는 방법이다.
	int k, l, m = 123, p = 456;

	// 예전에는 모든 변수가 처음에 다 선언되도록 코드를 작성해야 했지만 현재는 사용하는 곳에서 선언한다.
	return 0;
}