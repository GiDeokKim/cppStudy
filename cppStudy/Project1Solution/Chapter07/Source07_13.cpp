// ����� ���α׷����� ����
// Defensive Programming

#include <iostream>
#include <string>

int main(int argc, char* argv[])
{
	// syntax error
	//int x

	// semantic error
	int x;
	std::cin >> x;
	
	if (x >= 5) // = ���� �ʿ�
	{
		std::cout << "x is greater than 5" << std::endl;
	}

	// violated assumption
	std::string hello = "Hello, my name is Jack jack";
	std::cout << "Inpuit from 0 to" << hello.size() - 1 << std::endl; // �ǹ� ����

	while (true)
	{
		int ix;
		std::cin >> ix;
		if (ix >= 0 && ix <= hello.size() - 1)
		{
			std::cout << hello[ix] << std::endl;
			break;
		}
		else
		{
			std::cout << "Please try again" << std::endl;
		}
	}

	return 0;
}