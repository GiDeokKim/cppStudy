#include <iostream>
#include <fstream>
#include <string>

// 예외처리의 기본
// 예외처리는 performance에 영향을 미친다.(안쓰는 분야가 있다.)

//int findFirstChar(const char* string, char ch)
//{
//	for (size_t index = 0; index < strlen(string); ++index)
//	{
//		if (string[index] == ch)
//		{
//			return index;
//		}
//	}
//
//	return -1; // no match
//}
//
//double divide(int x, int y, bool& success)
//{
//	if (y == 0)
//	{
//		success = false;
//		return 0.0;
//	}
//
//	success = false;
//	return static_cast<double>(x) / y;
//}
//
//int main()
//{
//	bool success;
//	double result = divide(5, 3, success);
//
//	if (!success)
//	{
//		std::cerr << "An error occured" << std::endl;
//	}
//	else
//	{
//		std::cout << "Result is " << result << std::endl;
//	}
//
//	std::ifstream input_file("temp.txt");
//	if (!input_file)
//	{
//		std::cerr << "Cannot open file" << std::endl;
//	}
//
//	return 0;
//}

int main()
{
	// try, catch, throw
	/*double x;
	std::cin >> x;

	try
	{
		if (x < 0.0)
		{
			throw std::string("Negative input");
		}

		std::cout << std::sqrt(x) << std::endl;
	}
	catch (const std::string& error_message)
	{
		std::cout << error_message << std::endl;
	}*/

	try
	{
		//throw -1;
		//throw "My error message";
		throw std::string("My error message");
		// throw 받을 catch가 없으면 runtime error 발생
	}
	catch (int x)
	{
		std::cout << "Catch integer " << x << std::endl;
	}
	catch (double x)
	{
		std::cout << "Catch double " << x << std::endl;
	}
	catch (const char* error_message)
	{
		std::cout << "Char* " << error_message << std::endl;
	}
	catch (const std::string& error_message)
	{
		std::cout << error_message << std::endl;
	}

	return 0;
}