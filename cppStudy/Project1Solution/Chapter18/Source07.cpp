// 파일의 임의 위치 접근하기
#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib> // exit()
#include <sstream>

int main()
{
	const std::string fileName = "my_file.txt";

	//make a file
	{
		std::ofstream ofs(fileName);

		for (char i = 'a'; i <= 'z'; ++i)
		{
			ofs << i;
		}
		ofs << std::endl;
	}

	// read the file
	{
		std::ifstream ifs(fileName);

		ifs.seekg(5); // 처음 위치에서 5바이트 이동한 값
		std::cout << static_cast<char>(ifs.get()) << std::endl;

		ifs.seekg(5, std::ios::cur); // 현재 커서 위치에서 5바이트 이동한 값
		std::cout << static_cast<char>(ifs.get()) << std::endl;

		std::string str;
		getline(ifs, str);
		std::cout << str << std::endl;

		ifs.seekg(0, std::ios::end);
		std::cout << ifs.tellg() << std::endl;
	}

	{
		std::fstream iofs(fileName, std::ios::in | std::ios::out);
		std::fstream iofs(fileName);

		iofs.seekg(5); // 처음 위치에서 5바이트 이동한 값
		std::cout << static_cast<char>(iofs.get()) << std::endl; // read

		iofs.seekg(5); // 처음 위치에서 5바이트 이동한 값
		iofs.put('A'); // write
	}

	return 0;
}