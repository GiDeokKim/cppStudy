#include <iostream>
#include <tuple>

int my_func()
{
	return 0;
}

std::tuple<int, int> my_func2()
{
	return std::tuple<int, int>(123, 345);
}

auto my_func3()
{
	return std::tuple(123, 345, 567);
}

int main()
{
	std::tuple<int, int> result = my_func2();

	std::cout << std::get<0>(result) << " " << std::get<1>(result) << std::endl;

	auto [a, b, c] = my_func3();

	std::cout << a << " " << b << " " << c << std::endl;

	return 0;
}