#include <iostream>
#include <string>
// debugging tab -> command arguments

int main(int argc, char* argv[])
{
	for (int count = 0; count < argc; ++count)
	{
		std::string argv_single = argv[count];
		if (count == 1)
		{
			int input_number = std::stoi(argv_single);
			std::cout << input_number << std::endl;
		}
		else
		{
			std::cout << argv_single << std::endl;
		}
	}
	return 0;
}