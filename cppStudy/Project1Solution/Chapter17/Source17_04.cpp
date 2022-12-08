#include <iostream>
#include <string>
#include <vector>

int main()
{
	std::string my_str("abcdefg");

	std::cout << my_str[0] << std::endl;
	std::cout << my_str[3] << std::endl;
	my_str[3] = 'Z';
	std::cout << my_str << std::endl;

	const char* arr = my_str.c_str(); // null이 붙음
	//const char* arr = my_str.data(); // c_str과 동일
	std::cout << arr[6] << (int)arr[6] << std::endl;
	std::cout << arr[7] << (int)arr[7] << std::endl;

	//try
	//{
	//	// 퍼포먼스가 중요한 경우
	//	//my_str[100] = 'X'; // runtime error 예외처리로 못잡음
	//	
	//	// 안정성이 중요한 경우
	//	my_str.at(100) = 'X'; // 예외처리로 잡음
	//}
	//catch (std::exception& e)
	//{
	//	std::cout << e.what() << std::endl;
	//}
	
	char buf[20];

	my_str.copy(buf, 5, 0);
	std::cout << buf << std::endl;

	buf[5] = '\0';
	std::cout << buf << std::endl;

	return 0;
}