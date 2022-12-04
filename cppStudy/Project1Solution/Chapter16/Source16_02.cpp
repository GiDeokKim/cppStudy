// Standard Template Libraries and Containers
#include <iostream>
#include <vector>
#include <list>
#include <set>
#include <map>

int main()
{
	std::vector<int> container;
	//std::list<int> container;
	//std::set<int> container;
	//std::map<int, char> container;
	for (int i = 0; i < 10; ++i)
	{
		container.push_back(i);
	}

	std::vector<int>::const_iterator itr; // vector 내부 값 변경을 안할 때 사용
	itr = container.begin();
	while (itr != container.end())
	{
		std::cout << *itr << " ";

		++itr;
	}
	std::cout << std::endl;

	for (auto itr = container.begin(); itr != container.end(); ++itr)
	{
		std::cout << *itr << " ";
	}
	std::cout << std::endl;

	for (const auto& e : container)
	{
		std::cout << e << " ";
	}
	std::cout << std::endl;

	return 0;
}