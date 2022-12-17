// Passing Arguments by Address(Call by Address)
// 주소(pointer)에 의한 인수 전달
#include <iostream>

// reference처럼 처리되지만 다르다.
void foo(int* ptr)
{
	std::cout << *ptr << " " << ptr << " " << &ptr << std::endl;

	//*ptr = 10; // 값 변경됨
}
int main()
{
	int value = 5;
	std::cout << value << " " << &value << std::endl;

	int* ptr = &value;
	std::cout << &ptr << std::endl; // pointer 변수도 변수다.

	foo(ptr);// pointer 변수도 변수다. 값에 의한 전달로 처리된다.

	std::cout << value << " " << &value << std::endl;

	foo(&value);
	//foo(5); // error

	return 0;
}