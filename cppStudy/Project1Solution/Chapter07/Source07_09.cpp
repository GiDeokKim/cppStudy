// 함수 포인터 Function Pointers
// 함수도 포인터이다. 함수도 메모리에 들어간다.
#include <iostream>
#include <array>
#include <functional>


int func()
{
	return 5;
}

int func2(int x)
{
	return x;
}

int goo()
{
	return 10;
}

bool isEven(const int number)
{
	if (number % 2 == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool isOdd(const int number)
{
	if (number % 2 == 1)
	{
		return true;
	}
	else
	{
		return false;
	}
}

//void printNumbers(const std::array<int, 10>& my_array, bool print_even)
//{
//	for (const auto& element : my_array)
//	{
//		if (print_even && element % 2 == 0)
//		{
//			std::cout << element;
//		}
//		if (!print_even && element % 2 == 1)
//		{
//			std::cout << element;
//		}
//		std::cout << std::endl;
//	}
//}

typedef bool(*ft_ptr)(const int); // ft_ptr로 시그니처가 같은 함수 포인터로 사용 가능
using ft_ptr = bool(*)(const int); // 위와 동일

void printNumbers(const std::array<int, 10>& my_array, 
	bool(*check_fun)(const int) /*= isEven*/) // default parameters 가능
{
	for (const auto& element : my_array)
	{
		if (check_fun(element))
		{
			std::cout << element;
		}
	}
	std::cout << std::endl;
}

void printNumbers2(const std::array<int, 10>& my_array,
	std::function<bool(const int)> check_fun) // default parameters 가능
{
	for (const auto& element : my_array)
	{
		if (check_fun(element))
		{
			std::cout << element;
		}
	}
	std::cout << std::endl;
}

int main()
{
	{
		std::cout << func << std::endl;

		int(*func_ptr)() = func;
		std::cout << func_ptr() << std::endl;

		// 함수 변경 가능
		func_ptr = goo;
		std::cout << func_ptr() << std::endl;

		int(*func_ptr2)(int) = func2;
	}

	{
		std::array<int, 10> my_array{ 0,1,2,3,4,5,6,7,8,9 };

		printNumbers(my_array, isEven);
		printNumbers(my_array, isOdd);
	}

	{
		std::array<int, 10> my_array{ 0,1,2,3,4,5,6,7,8,9 };
		std::function<bool(const int)> func_ptr = isEven;

		printNumbers2(my_array, func_ptr);

		func_ptr = isOdd;
		printNumbers2(my_array, func_ptr);
	}

	return 0;
}