#include <iostream>
#include <array>
#include "Storage8.h"

template<typename T>
class A
{
public:
	A(const T& temp)
	{}

	void doSomething()
	{
		std::cout << typeid(T).name() << std::endl;
	}

	void test()
	{}
};

template<>
class A<char>
{
public:
	A(const char& temp)
	{}

	void doSomething()
	{
		std::cout << "Char type specialization" << std::endl;
	}
};

int main()
{
	// A 생성자가 없는 경우
	/*A<int> a_int;
	A<double> a_double;
	A<char> a_char;*/

	//// A 생성자가 있는 경우 (C++ 17부터 가능)
	//A a_int(1);
	//A a_double(3.14);
	//A a_char('a');

	//a_int.test();
	//a_double.test();
	//// a_char.test(); // 호출 불가능

	//a_int.doSomething();
	//a_double.doSomething();
	//a_char.doSomething();

	// Define a Storage8 for integers
	Storage8<int> intStorage;

	for (int count = 0; count < 8; ++count)
	{
		intStorage.set(count, count);
	}

	for (int count = 0; count < 8; ++count)
	{
		std::cout << intStorage.get(count) << '\n';
	}

	std::cout << "Sizeof Storage8<int> " << sizeof(Storage8<int>) << std::endl;

	// Define a Storage8 for bool
	Storage8<bool> boolStorage;

	for (int count = 0; count < 8; ++count)
	{
		boolStorage.set(count, count & 3);
	}

	for (int count = 0; count < 8; ++count)
	{
		std::cout << (boolStorage.get(count) ? "true" : "false") << '\n';
	}

	std::cout << "Sizeof Storage8<bool> " << sizeof(Storage8<bool>) << std::endl;

	return 0;
}