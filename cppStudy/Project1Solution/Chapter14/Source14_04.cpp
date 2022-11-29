#include <iostream>
#include <exception> // std::exception
#include <string>

class CustomException : public std::exception
{
public:
	const char* what() const noexcept override
	{
		return "Custom exception";
	}
};

int main()
{
	try
	{
		/*std::string s;
		s.resize(-1);*/

		//throw std::runtime_error("Bass thing happened");
		throw CustomException();
	}
	/*catch (const std::length_error& e)
	{
		std::cout << "Length Error" << std::endl;
		std::cerr << e.what() << '\n';
	}*/
	catch(const std::exception& e)
	{
		std::cout << typeid(e).name() << std::endl;
		std::cerr << e.what() << '\n';
	}
	
	return 0;
}