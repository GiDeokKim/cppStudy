#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>

template<typename T>
std::string ToString(T x)
{
	std::ostringstream osstream;

	osstream << x;

	return osstream.str();
}

template<typename T>
bool FromString(const std::string& str, T x)
{
	std::istringstream isstream(str);

	return (isstream >> x) ? true : false;
}

int main()
{
	{
		std::string my_string("string");
		//const char* my_string = "string";
		std::string second_string(my_string);
		std::string third_string(my_string, 3);
		std::string test_string(10, 'A');

		std::vector<char> vec;
		for (const auto e : "Today is a good day.")
		{
			vec.push_back(e);
		}
		std::string test_string2(vec.begin(), vec.end());
		std::string test_string3(vec.begin(), std::find(vec.begin(), vec.end(), 'g'));

		std::cout << my_string << std::endl;
	}
	
	{
		std::string my_str(std::to_string(1024));
		std::string my_str2(ToString(3.1415));
		double d;
		if (FromString(my_str2, d))
		{
			std::cout << d << std::endl;
		}
		else
		{
			std::cout << "Cannot convert string to double" << std::endl;
		}

		my_str += std::to_string(128);

		int i = std::stoi(my_str);
		float f = std::stof(my_str);

		std::cout << my_str << std::endl;
		std::cout << my_str2 << std::endl;
		std::cout << i << std::endl;
		std::cout << f << std::endl;
	}

	// basic_string<>, string, wstring
	{
		std::string string;
		std::wstring wstring;

		wchar_t wc; // unsigned short // wide character/unicode
	}

	{
		std::locale::global(std::locale(""));
		std::wcout.imbue(std::locale());

	}
	return 0;
}