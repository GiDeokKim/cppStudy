#include <iostream>
#include <string>


int main()
{
	std::string my_str("012345678");

	std::cout << my_str.size() << std::endl; // 9
	std::cout << std::boolalpha;
	std::cout << my_str.empty() << std::endl; // false
	std::cout << my_str.capacity() << std::endl;
	std::cout << my_str.length() << std::endl;
	std::cout << my_str.max_size() << std::endl;
	std::cout << "\n";
	std::string my_str2(""); // const char[1]
	std::cout << my_str2.size() << std::endl; // 0
	std::cout << my_str2.empty() << std::endl; // true
	std::cout << my_str2.capacity() << std::endl;
	std::cout << my_str2.length() << std::endl;
	std::cout << my_str2.max_size() << std::endl;
	my_str2.reserve(1000); // 1000 ÀÌ»ó ¿¹¾àµÊ
	std::cout << my_str2.capacity() << std::endl;

	return 0;
}