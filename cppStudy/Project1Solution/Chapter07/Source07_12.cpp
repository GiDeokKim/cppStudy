// 재귀적 함수 호출
// Recursive Function Call
#include <iostream>

// 너무 많이 재귀 함수를 호출하면 stack overflow 발생
// debug mode로 함수 주소 확인
void countDown(int count)
{
	std::cout << count << std::endl;

	if (count > 0)
	{
		countDown(count - 1);
	}
}

int sumTo(int sumto)
{
	return sumto <= 0 ? 0 : sumTo(sumto - 1) + sumto;
}

int main()
{
	countDown(5);

	std::cout << sumTo(10) << std::endl;
	return 0;
}