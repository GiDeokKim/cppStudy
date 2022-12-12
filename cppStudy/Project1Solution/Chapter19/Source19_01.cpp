// lambda function & std::function
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>

void goodbye(const std::string& s)
{
	std::cout << "Goodbye " << s << std::endl;
}

class Object
{
public:
	void hello(const std::string& s)
	{
		std::cout << "Hello " << s << std::endl;
	}
};

int main()
{
	// lambda-introducer []
	// lambda-parameter-declaration
	// lambda-return-type-clause
	// compound-statement
	auto func = [](const int i) -> void { std::cout << "Hello" << std::endl; };

	func(123);

	[](const int i) -> void { std::cout << "Hello" << std::endl; }(1);

	{
		std::string name = "JackJack";
		[&]() { std::cout << name << std::endl; } ();

		// classÀÎ °æ¿ì
		//[this]() { std::cout << name << std::endl; } ();
	}

	std::vector<int> v;
	v.push_back(1);
	v.push_back(2);

	auto func2 = [](const int val) {std::cout << val << std::endl; };
	//std::for_each(v.begin(), v.end(), func2);
	std::for_each(v.begin(), v.end(), [](const int val) {std::cout << val << std::endl; });

	std::cout << []() -> int { return 1; }() << std::endl;

	std::function<void(int)> func3 = func2;
	func3(123);

	std::function<void()> func4 = std::bind(func3, 456);
	func4();

	{
		Object instance;
		auto f = std::bind(&Object::hello, &instance, std::placeholders::_1);

		f("World");

		auto f2 = std::bind(&goodbye, std::placeholders::_1);

		f2("World");
	}

	return 0;
}