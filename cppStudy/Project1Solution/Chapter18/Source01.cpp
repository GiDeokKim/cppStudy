// istream���� �Է� �ޱ�
#include <iostream>
#include <string>
#include <iomanip> // input/output manipulators

int main()
{
	{
		std::cout << "Enter a number" << std::endl;

		int i;
		std::cin >> i;

		std::cout << i << std::endl;
	}

	{
		char buf[5];

		//std::cin >> buf; // �ʹ� �� ���ڿ��� �Է��ϸ� ��Ÿ�� ���� �߻�
		std::cin >> std::setw(5) >> buf; // �� ���ڿ��� �Է��ϸ� ��Ʈ���� ��������
		std::cout << buf << std::endl;

		std::cin >> std::setw(5) >> buf; // ��Ʈ���� ���� ���ڿ��� ��
		std::cout << buf << std::endl;
	}

	{
		char ch;

		while (std::cin >> ch) // sdt::cin.get(ch)�� �� ĭ���� ���� �� ����
		{
			std::cout << ch;
		}
		//cin.gcount() : �ֱ� cin���� �о���� ���ڿ� ����
		//cin.getline() : �Է� ���ڿ� �� �� ��ü�� �޾Ƶ��δ�.(�ٹٲ� ���ڿ����� �޴´�.)
	}

	{ // cin�� �� ĭ���� ������ �� ���� ����� �� �ִ� ��
		int i;
		float f;

		std::cin >> i >> f;

		std::cout << i << " " << f << std::endl;
	}

	{
		std::string buf;

		std::getline(std::cin, buf);
		std::cout << std::cin.gcount() << " " << buf << std::endl;
	}

	{
		char buf[1024];

		std::cin.ignore(/*2*/);
		std::cout << (char)std::cin.peek() << std::endl; // ���ۿ��� �������� �ʰ� ��½ ���⸸ ��

		std::cin >> buf;
		std::cout << buf << std::endl;

		// std::cin.unget
	}

	return 0;
}