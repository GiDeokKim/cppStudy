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

	const char* arr = my_str.c_str(); // null�� ����
	//const char* arr = my_str.data(); // c_str�� ����
	std::cout << arr[6] << (int)arr[6] << std::endl;
	std::cout << arr[7] << (int)arr[7] << std::endl;

	//try
	//{
	//	// �����ս��� �߿��� ���
	//	//my_str[100] = 'X'; // runtime error ����ó���� ������
	//	
	//	// �������� �߿��� ���
	//	my_str.at(100) = 'X'; // ����ó���� ����
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