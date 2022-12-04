// Standard Template Libraries and Containers
#include <iostream>
#include <vector>
#include <deque>
#include <set>
#include <map>
#include <string>
#include <stack>
#include <queue>

void sequence_containers()
{
	//vector
	{
		std::vector<int> vec; // #include <vector>
		for (int i = 0; i < 10; ++i)
		{
			vec.push_back(i);
		}

		for (const auto& e : vec)
		{
			std::cout << e << " ";
		}
		std::cout << std::endl;
	}

	//deque
	{
		std::deque<int> deq; // #include <deque>
		for (int i = 0; i < 10; ++i)
		{
			deq.push_back(i);
			deq.push_front(i);
		}

		for (const auto& e : deq)
		{
			std::cout << e << " ";
		}
		std::cout << std::endl;
	}
}

void associative_containers()
{
	//set
	{
		std::set<std::string> str_set; // #include <set>

		str_set.insert("Hello");
		str_set.insert("World");
		str_set.insert("Hello");
		
		std::cout << str_set.size() << std::endl;

		for (const auto& e : str_set)
		{
			std::cout << e << " ";
		}
		std::cout << std::endl;
	}

	//multiset : duplication is allowed
	{
		std::multiset<std::string> str_set; // #include <set>

		str_set.insert("Hello");
		str_set.insert("World");
		str_set.insert("Hello");

		std::cout << str_set.size() << std::endl;

		for (const auto& e : str_set)
		{
			std::cout << e << " ";
		}
		std::cout << std::endl;
	}

	//map : key/value
	{
		std::map<char, int> map; // #include <map>

		map['a'] = 10;
		map['b'] = 20;
		map['c'] = 50;

		std::cout << map['a'] << std::endl;

		map['a'] = 100;

		std::cout << map['a'] << std::endl;

		for (const auto& e : map)
		{
			std::cout << e.first << " " << e.second << " ";
		}
		std::cout << std::endl;
	}

	//multimap : duplicated key/value
	{
		std::multimap<char, int> map; // #include <map>

		map.insert(std::pair('a', 10)); // Before C++ 14, pair<char, int>('a', 10)
		map.insert(std::pair('b', 10));
		map.insert(std::pair('c', 10));
		map.insert(std::pair('a', 100));

		std::cout << map.count('a') << std::endl;

		for (const auto& e : map)
		{
			std::cout << e.first << " " << e.second << " ";
		}
		std::cout << std::endl;
	}
}

void containers_adapters()
{
	//stack
	{
		std::cout << "Stack" << std::endl;

		std::stack<int> stack; // #include <stack>

		stack.push(1); // push adds a copy
		stack.emplace(2); // emplace constructs a new object
		stack.emplace(3);

		std::cout << stack.top() << std::endl;
		stack.pop();
		std::cout << stack.top() << std::endl;
	}

	//queue
	{
		std::cout << "Queue" << std::endl;

		std::queue<int> queue; // #include <queue>

		queue.push(1);
		queue.push(2);
		queue.push(3);

		std::cout << queue.front() << queue.back() << std::endl;
		queue.pop();
		std::cout << queue.front() << queue.back() << std::endl;
	}

	//priority queue
	{
		std::cout << "Priority Queue" << std::endl;

		std::priority_queue<int> queue; // #include <queue>

		for (const int n : {1, 8, 5, 6, 3, 4, 0, 9, 7, 2})
		{
			queue.push(n);
		}

		for (int i = 0; i < 10; i++)
		{
			std::cout << queue.top() << std::endl;
			queue.pop();
		}
	}
}

int main()
{
	//sequence_containers();

	//associative_containers();

	containers_adapters();

	return 0;
}