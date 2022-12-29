// std::vector를 stack처럼 사용하기
#include <iostream>
#include <vector>

// Heap에서 new/delete를 하는 것은 많이 느리다.
// new/delete를 적게 하는 것이 관건이다.

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

	// reserve를 해두면 new/delete가 발생하지 않아 속도가 빠름
	// 다만 메모리 사용은 크다.
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
//	// int* v_ptr = new int[3]{1, 2, 3};와 비슷
//	std::vector<int> v{ 1,2,3 };
//
//	// size, capacity 개념
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
//	// resize로 크기를 줄이면 메모리를 반납 및 삭제를 하지 않는다.
//	// 속도를 위한 설계
//	int* ptr = v.data();
//	std::cout << ptr[2] << std::endl;
//
//
//	v.reserve(1024); // resize는 커진 곳에 0으로 초기화함
//	std::cout << v.size() << v.capacity() << std::endl;
//
//	return 0;
//}

