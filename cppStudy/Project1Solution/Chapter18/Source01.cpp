// istream으로 입력 받기
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

		//std::cin >> buf; // 너무 긴 문자열을 입력하면 런타임 에러 발생
		std::cin >> std::setw(5) >> buf; // 긴 문자열을 입력하면 스트림에 남아있음
		std::cout << buf << std::endl;

		std::cin >> std::setw(5) >> buf; // 스트림에 남은 문자열이 들어감
		std::cout << buf << std::endl;
	}

	{
		char ch;

		while (std::cin >> ch) // sdt::cin.get(ch)로 빈 칸까지 받을 수 있음
		{
			std::cout << ch;
		}
		//cin.gcount() : 최근 cin으로 읽어들인 문자열 길이
		//cin.getline() : 입력 문자열 한 줄 전체를 받아들인다.(줄바꿈 문자열까지 받는다.)
	}

	{ // cin이 빈 칸으로 나눠질 때 좋게 사용할 수 있는 예
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
		std::cout << (char)std::cin.peek() << std::endl; // 버퍼에서 꺼내지는 않고 슬쩍 보기만 함

		std::cin >> buf;
		std::cout << buf << std::endl;

		// std::cin.unget
	}

	return 0;
}