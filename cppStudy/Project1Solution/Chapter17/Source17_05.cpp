#include <iostream>
#include <string>

int main()
{
	{
		std::string str1("one");

		std::string str2;
		str2 = str1;
		str2 = "two";
		str2.assign("two").append(" three");
		str2 += " Four";
		str2.push_back('P'); // char¸¸ °¡´É
		std::cout << str2 << std::endl;
	}

	std::string str1("one");
	std::string str2("two");
	std::cout << str1 << " " << str2 << std::endl;

	std::swap(str1, str2);
	std::cout << str1 << " " << str2 << std::endl;

	str1.swap(str2);
	std::cout << str1 << " " << str2 << std::endl;

	std::string str("test");
	str.insert(2, "qwer");
	std::cout << str << std::endl;

	return 0;
}