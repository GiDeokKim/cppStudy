// string stream ���ڿ� �帧
#include <iostream>
#include <sstream>

int main()
{
	{
		std::stringstream os;
		os << "Hello, World!!"; // << : insertion operator, >> : extraction operator
		os.str("Hello, World!!"); // ������ �Էµ� �͵��� �����ϰ� ���

		std::string str;
		os >> str;
		std::cout << str << std::endl;
		str = os.str();
		std::cout << str << std::endl;
	} 
	
	{// << : insertion operator�� ���� �����ؼ� �־�д�.
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

	{ // string stream ����
		std::stringstream os;
		os << "12345 67.89";

		os.str(""); // �Ķ���Ͱ� ������ ������ ������ �ٸ�
		//os.str(std::string());
		//os.clear(); // �� ����������? ���� ����

		std::cout << os.str() << std::endl;
	}

	return 0;
}