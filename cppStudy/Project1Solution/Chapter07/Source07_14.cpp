#include <cassert>
#include <array>
#include <iostream>

void printValue(const std::array<int, 5>& my_array, int ix)
{
	// runtime에 오류 잡아줌
	assert(ix >= 0);
	assert(ix <= my_array.size() - 1);

	std::cout << my_array[ix] << std::endl;
}

int main()
{
	int number = 5;
	assert(number == 5); //debug mode에서 동작함

	std::array<int, 5> my_arr{ 1,2,3,4,5 };
	printValue(my_arr, 100);

	const int x = 5;
	static_assert(x == 5, "x should be 5"); // compile time에 잡아줌

	return 0;
}