// ����� �Լ� ȣ��
// Recursive Function Call
#include <iostream>

// �ʹ� ���� ��� �Լ��� ȣ���ϸ� stack overflow �߻�
// debug mode�� �Լ� �ּ� Ȯ��
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