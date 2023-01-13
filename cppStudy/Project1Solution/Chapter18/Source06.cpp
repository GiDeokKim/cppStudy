// 기본적인 파일 입출력
#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib> // exit()
#include <sstream>

int main()
{
	//writing
	if (true)
	{
		// 아스키로 파일 저장하면 너무 오래걸림
		// 바이너리로 저장하는게 더 많다.
		std::ofstream ofs("my_first_file.dat"); // ios::app, ios::binary
		//ofs.open("my_first_file.dat");

		if (!ofs)
		{
			std::cerr << "Couldn't open file" << std::endl;
			exit(1);
		}

		// 아스키 예제
		/*ofs << "Line 1" << std::endl;
		ofs << "Line 2" << std::endl;*/

		// 바이너리 예제
		/*const unsigned num_data = 10;
		ofs.write((char*)&num_data, sizeof(num_data));

		for (int i = 0; i < num_data; ++i)
		{
			ofs.write((char*)&i, sizeof(i));
		}*/


		std::stringstream ss;
		ss << "Line 1" << std::endl;
		ss << "Line 2" << std::endl;
		std::string str = ss.str();

		unsigned str_length = str.size();
		ofs.write((char*)&str_length, sizeof(str_length));
		ofs.write(str.c_str(), str_length);

		//ofs.close(); // not necessary
	}

	//reading
	if (true)
	{
		std::ifstream ifs("my_first_file.dat");

		if (!ifs)
		{
			std::cerr << "Cannot open file" << std::endl;
			exit(1);
		}

		// 아스키 예제
		/*while (ifs)
		{
			std::string str;
			getline(ifs, str);

			std::cout << str << std::endl;
		}*/
		
		// 바이너리 예제
		/*unsigned num_data = 0;
		ifs.read((char*)&num_data, sizeof(num_data));

		for (unsigned i = 0; i < num_data; ++i)
		{
			int num;
			ifs.read((char*)&num, sizeof(num));

			std::cout << num << std::endl;
		}*/
	}

	return 0;
}