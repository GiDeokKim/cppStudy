// 다양한 반환 값들
#include <iostream>
#include <array>
#include <tuple>

int getValue(int x)
{
	int value = x * 2;
	return value;
}

int* getValue2(int x)
{
	int value = x * 2;
	return &value;
}

int& getValue3(int x)
{
	int value = x * 2;
	return value;
}

int* allocateMemory(int size)
{
	return new int[size];
}

int& get(std::array<int, 100>& my_array, int ix)
{
	return my_array[ix];
}

struct S
{
	int a, b, c, d;
};

S getStruct()
{
	S my_S{ 1,2,3,4 };
	return my_S;
}

std::tuple<int, double> getTuple()
{
	int a = 10;
	double d = 3.14;
	return std::make_tuple(a, d);
}

int main()
{
	// return by value
	int value = getValue(3);

	// return by address
	int value2 = *getValue2(3); // 사라질 변수롤 dereferencing하므로 권장하지 않음
	int* value3 = getValue2(3); // 더 위험함

	int* array = allocateMemory(1024); // 쓰일 가능성은 있으나 new/delete 위치가 달라서 위험
	delete[] array;

	// return by reference
	int value4 = getValue3(5);
	int& value5 = getValue3(5); // 가능하지만 위험함
	std::cout << value5 << std::endl;
	std::cout << value5 << std::endl; // 쓰레기값 출력

	std::array<int, 100> my_array;
	my_array[30] = 10;
	get(my_array, 30) = 1024;
	std::cout << my_array[30] << std::endl;

	// return by structure
	// 구조체 만들어서 함수 만드는 행위가 오버헤드 크다.
	S my_S = getStruct();

	// return by tuple
	std::tuple<int, double> my_tp = getTuple();
	std::get<0>(my_tp); //a
	std::get<1>(my_tp); //d

	// C++ 17
	auto [a, d] = getTuple();
	std::cout << a << std::endl;
	std::cout << d << std::endl;

	return 0;
}