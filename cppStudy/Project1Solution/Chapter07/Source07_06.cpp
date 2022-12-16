// Inline Functions
#include <iostream>

// inline�� �� ������ �����Ϸ����� �����ϴ� Ű����
// �ֱٿ��� Ű���� ��� �����Ϸ��� �˾Ƽ� �Ѵ�(�ᱹ Ű���带 ���� �� �ʿ� �ִ°�...)
// �ʹ� ������ ��� ���α׷��� �޸𸮸� ���� ��Ƹ��� �� �ִ�
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