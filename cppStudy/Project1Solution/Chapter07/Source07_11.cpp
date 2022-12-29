// std::vector�� stackó�� ����ϱ�
#include <iostream>
#include <vector>

// Heap���� new/delete�� �ϴ� ���� ���� ������.
// new/delete�� ���� �ϴ� ���� �����̴�.

void printStack(const std::vector<int>& stack)
{
	for (const auto& e : stack)
	{
		std::cout << e << " ";
	}
	std::cout << std::endl;
}

int main()
{
	std::vector<int> stack;

	// reserve�� �صθ� new/delete�� �߻����� �ʾ� �ӵ��� ����
	// �ٸ� �޸� ����� ũ��.
	// stack.reserve(1024);

	stack.push_back(3);
	printStack(stack);

	stack.push_back(5);
	printStack(stack);

	stack.push_back(7);
	printStack(stack);

	stack.pop_back();
	printStack(stack);

	stack.pop_back();
	printStack(stack);

	stack.pop_back();
	printStack(stack);

	return 0;
}

//int main()
//{
//	// int* v_ptr = new int[3]{1, 2, 3};�� ���
//	std::vector<int> v{ 1,2,3 };
//
//	// size, capacity ����
//
//	for (const auto& e : v)
//	{
//		std::cout << e << " ";
//	}
//	std::cout << std::endl;
//
//	std::cout << v.size() << std::endl;
//
//	v.resize(10);
//
//	for (const auto& e : v)
//	{
//		std::cout << e << " ";
//	}
//	std::cout << std::endl;
//
//	std::cout << v.size() << v.capacity() << std::endl;
//
//	v.resize(2);
//
//	for (const auto& e : v)
//	{
//		std::cout << e << " ";
//	}
//	std::cout << std::endl;
//
//	std::cout << v.size() << v.capacity() << std::endl;
//
//	std::cout << v[2] << std::endl; // runtime error
//	std::cout << v.at(2) << std::endl; // runtime error
//
//	// resize�� ũ�⸦ ���̸� �޸𸮸� �ݳ� �� ������ ���� �ʴ´�.
//	// �ӵ��� ���� ����
//	int* ptr = v.data();
//	std::cout << ptr[2] << std::endl;
//
//
//	v.reserve(1024); // resize�� Ŀ�� ���� 0���� �ʱ�ȭ��
//	std::cout << v.size() << v.capacity() << std::endl;
//
//	return 0;
//}

