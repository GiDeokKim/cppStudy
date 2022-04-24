#include <iostream>

//int main()
//{
//	int x = 123;
//
//	// y라는 변수에 123을 대입해준다.
//	// y라는 변수 이름이 가리키고 있는 메모리 공간에 123이라는 정수를 저장해둔다.
//	int y;
//	y = 123; // assignment operator 대입 연산자
//	
//	std::cout << y << std::endl;
//	std::cout << &y << std::endl; // y의 메모리 주소가 출력된다.
//	// & ampersand
//
//	// l-value r-value
//	// l-value는 메모리 주소를 가지고 있다.
//	// r-value는 임시적으로 저장한 뒤 사라진다.
//	// x = x + 2;라고 할지라도 오른쪽의 x는 임시적으로 다른 메모리 공간에 가져온 뒤 
//	// 2를 더하고 연산이 되기 때문에 l-value가 아닌 r-value이다.
//
//
//
//	return 0;
//}

int main()
{
	int x; // error C4700: uninitialized local variable 'x' used
	// debug 모드에서는 실행시 runtime error가 뜬다.
	// release 모드에서는 실행시 자동으로 초기화시켜주는데 기본적인 값을 넣어준다.
	// 변수는 항상 초기화를 해주자!!
	// 이전 프로그램이 해당 메모리 주소를 사용하다가 쓰레기 값을 넣어두고 가버리기 때문에
	// 항상 초기화로 바로 잡아야한다/.
	int y = 123; // initialization
	//int y(123); 효율적인 차이는 없다.
	y = 5; // assignment


	std::cout << x << std::endl;

	return 0;
}