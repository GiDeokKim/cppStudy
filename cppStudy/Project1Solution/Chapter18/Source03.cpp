// string stream 문자열 흐름
#include <iostream>
#include <sstream>

int main()
{
	{
		std::stringstream os;
		os << "Hello, World!!"; // << : insertion operator, >> : extraction operator
		os.str("Hello, World!!"); // 이전에 입력된 것들을 무시하고 덮어씀

		std::string str;
		os >> str;
		std::cout << str << std::endl;
		str = os.str();
		std::cout << str << std::endl;
	} 
	
	{// << : insertion operator을 쓰면 누적해서 넣어둔다.
		std::stringstream os;
		os << "Hello, World!!\n\n";
		os << "Hello, World!!2" << std::endl << std::endl;

		std::cout << os.str() << std::endl;
	}

	{
		std::stringstream os;
		os << "12345 67.89";
		//os << "1234567.89";

		std::string str1;
		std::string str2;
		os >> str1 >> str2;

		std::cout << str1 << "|" << str2 << std::endl;
	}

	{
		std::stringstream os;
		int i = 12345;
		double d = 67.89;
		os << i << d;
		//os << i << " " << d;

		std::string str1;
		std::string str2;
		os >> str1 >> str2;

		std::cout << str1 << "|" << str2 << std::endl;
	}

	{
		std::stringstream os;
		int i = 12345;
		double d = 67.89;
		
		os << i << " " << d;

		int i2;
		double d2;
		os >> i2 >> d2;

		std::cout << i2 << "|" << d2 << std::endl;
	}

	{
		std::stringstream os;
		os << "12345 67.89";

		int i2;
		double d2;
		os >> i2 >> d2;

		std::cout << i2 << "|" << d2 << std::endl;
	}

	{ // string stream 비우기
		std::stringstream os;
		os << "12345 67.89";

		os.str(""); // 파라미터가 있을때 없을때 동작이 다름
		//os.str(std::string());
		//os.clear(); // 왜 안지워질까? 다음 강의

		std::cout << os.str() << std::endl;
	}

	return 0;
}