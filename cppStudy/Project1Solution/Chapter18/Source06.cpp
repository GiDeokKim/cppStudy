// �⺻���� ���� �����
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
		// �ƽ�Ű�� ���� �����ϸ� �ʹ� �����ɸ�
		// ���̳ʸ��� �����ϴ°� �� ����.
		std::ofstream ofs("my_first_file.dat"); // ios::app, ios::binary
		//ofs.open("my_first_file.dat");

		if (!ofs)
		{
			std::cerr << "Couldn't open file" << std::endl;
			exit(1);
		}

		// �ƽ�Ű ����
		/*ofs << "Line 1" << std::endl;
		ofs << "Line 2" << std::endl;*/

		// ���̳ʸ� ����
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

		// �ƽ�Ű ����
		/*while (ifs)
		{
			std::string str;
			getline(ifs, str);

			std::cout << str << std::endl;
		}*/
		
		// ���̳ʸ� ����
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