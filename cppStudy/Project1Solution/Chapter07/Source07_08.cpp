// �Ű������� �⺻��
// Default Parameters
#include <iostream>

void print(int x = 0) // Default Parameter x = 0
//void print(int x, int y = 0, int z) // �Ұ����� ����
{
	std::cout << x << std::endl;
}

int main()
{
	print(10);
	print();
	return 0;
}