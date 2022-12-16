// Inline Functions
#include <iostream>

// inline을 할 것으로 컴파일러에게 권장하는 키워드
// 최근에는 키워드 없어도 컴파일러가 알아서 한다(결국 키워드를 굳이 쓸 필요 있는가...)
// 너무 남발할 경우 프로그램이 메모리를 많이 잡아먹을 수 있다
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