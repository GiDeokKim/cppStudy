#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

int main()
{
	std::vector<int> container;
	//std::list<int> container;
	for (int i = 0; i < 10; ++i)
	{
		container.push_back(i);
	}

	/*auto itr = container.begin();
	std::list<int>::const_iterator itr;*/
	auto itr = std::min_element(container.begin(), container.end());
	std::cout << *itr << std::endl;

	itr = std::max_element(container.begin(), container.end());
	std::cout << *itr << std::endl;

	std::cout << std::endl;

	itr = std::find(container.begin(), container.end(), 3);
	container.insert(itr, 128); // vector�� insert�� ���� �� �ִ�.
	
	for (const auto& e : container)
	{
		std::cout << e << " ";
	}
	std::cout << std::endl;

	std::sort(container.begin(), container.end());
	//container.sort(); // list�� sort�� Ŭ���� ���ο� �ִ�.

	for (const auto& e : container)
	{
		std::cout << e << " ";
	}
	std::cout << std::endl;

	std::reverse(container.begin(), container.end());
	//container.reverse(); // list�� reverse�� Ŭ���� ���ο� �ִ�.

	for (const auto& e : container)
	{
		std::cout << e << " ";
	}
	std::cout << std::endl;

	return 0;
}