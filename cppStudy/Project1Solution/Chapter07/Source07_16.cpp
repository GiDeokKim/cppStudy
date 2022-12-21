// 생략부호 Ellipsis
#include <iostream>
#include <cstdarg>

double findAverage(int count, ...)
{
	double sum = 0;

	va_list list;

	va_start(list, count);

	for (int arg = 0; arg < count; ++arg)
	{
		sum += va_arg(list, int);
	}

	va_end(list);

	return sum / count;
}

int main()
{
	std::cout << findAverage(1, 1, 2, 3, "Hello", 'c') << std::endl;
	std::cout << findAverage(3, 1, 2, 3) << std::endl;
	std::cout << findAverage(5, 1, 2, 3, 4, 5) << std::endl;
	std::cout << findAverage(10, 1, 2, 3, 4, 5) << std::endl;
	return 0;
}