// Inline Functions
#include <iostream>

// inline을 할 것으로 컴파일러에게 권장하는 키워드
// 최근에는 키워드 없어도 컴파일러가 알아서 한다
inline int min(int x, int y)
{
	return x > y ? y : x;
}

int main()
{
	std::cout << min(5, 6) << std::endl;
	std::cout << min(3, 2) << std::endl;

	std::cout << (5 > 6 ? 6 : 5) << std::endl;
	std::cout << (3 > 2 ? 2 : 3) << std::endl;

	return 0;
}