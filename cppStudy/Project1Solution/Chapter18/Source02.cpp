// ostream으로 출력기
#include <iostream>
#include <iomanip> // input/output manipulators

int main()
{
	{
		// set flag
		std::cout.setf(std::ios::showpos);
		std::cout << 108 << std::endl;

		std::cout.unsetf(std::ios::showpos);
		std::cout << 108 << std::endl;
	}

	{ // 셋 다 동일한 결과
		/*std::cout.unsetf(std::ios::dec);
		std::cout.setf(std::ios::hex);*/

		std::cout.setf(std::ios::hex, std::ios::basefield);

		//std::cout << std::hex;

		std::cout << 108 << std::endl;

		// 대문자 출력
		std::cout.setf(std::ios::uppercase);
		std::cout << 108 << std::endl;
	}

	{
		std::cout << std::defaultfloat;
		std::cout << std::fixed;
		//std::cout << std::scientific;
		//std::cout << std::showpoint;
		std::cout << std::setprecision(3) << 123.456 << std::endl;
		std::cout << std::setprecision(4) << 123.456 << std::endl;
		std::cout << std::setprecision(5) << 123.456 << std::endl;
		std::cout << std::setprecision(6) << 123.456 << std::endl;
		std::cout << std::setprecision(7) << 123.456 << std::endl;
	}

	{
		std::cout << -12345 << std::endl;
		//std::cout.fill('*');
		std::cout << std::setw(10) << -12345 << std::endl;
		std::cout << std::setw(10) << std::left << -12345 << std::endl;
		std::cout << std::setw(10) << std::right << -12345 << std::endl;
		std::cout << std::setw(10) << std::internal << -12345 << std::endl;
	}

	return 0;
}