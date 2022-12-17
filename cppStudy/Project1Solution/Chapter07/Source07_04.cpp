// Passing Arguments by Address(Call by Address)
// �ּ�(pointer)�� ���� �μ� ����
#include <iostream>

// referenceó�� ó�������� �ٸ���.
void foo(int* ptr)
{
	std::cout << *ptr << " " << ptr << " " << &ptr << std::endl;

	//*ptr = 10; // �� �����
}
int main()
{
	int value = 5;
	std::cout << value << " " << &value << std::endl;

	int* ptr = &value;
	std::cout << &ptr << std::endl; // pointer ������ ������.

	foo(ptr);// pointer ������ ������. ���� ���� ���޷� ó���ȴ�.

	std::cout << value << " " << &value << std::endl;

	foo(&value);
	//foo(5); // error

	return 0;
}