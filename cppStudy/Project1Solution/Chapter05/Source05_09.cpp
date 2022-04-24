// ���� ����� random number generation
// random ���̺귯���� ���°� �Ϲ���

#include <iostream>

using namespace std;

//unsigned int PRNG() // pseudo Random Number Generator
//{
//	static unsigned int seed = 5523; // seed number
//
//	seed = 8253729 * seed + 2396403;
//
//	return seed % 32768;
//}
//
//int main()
//{
//	for (int count = 1; count <= 100; ++count)
//	{
//		cout << PRNG() << "\t";
//
//		if (count % 5 == 0) cout << endl;
//	}
//
//	return 0;
//}

#include <cstdlib>	// std::rand(), std::srand()
#include <ctime>	// std::time()

//int getRandomNumber(int min, int max)
//{
//	//RAND_MAX�� ������ �� ���� ū ��
//	static const double fraction = 1.0 / (RAND_MAX + 1.0);
//
//	return min + static_cast<int>((max - min + 1) * (std::rand() * fraction));
//}
//int main()
//{
//	// ������Ҷ��� �õ尡 �����Ǵ°� ���ϴ�.
//	//std::srand(5323); // seed �̰� �����Ǹ� ��� ���� ���� ���� �����
//	std::srand(static_cast<unsigned int>(std::time(0)));
//	for (int count = 1; count <= 100; ++count)
//	{
//		//cout << std::rand() << "\t";
//		cout << getRandomNumber(5, 8) << "\t";
//
//		if (count % 5 == 0) cout << endl;
//	}
//
//	return 0;
//}

#include <random> // c++11
// ����� �� ���� ���� ����� �� �ִ�.

using namespace std;

int main()
{
	std::random_device rd;
	std::mt19937 mersenne(rd()); // create a mersenne twister //mersenne ������ �̸�
	std::uniform_int_distribution<> dice(1, 6); // ���� ������ Ȯ���� �߻�

	for (int count = 1; count <= 20; ++count)
		cout << dice(mersenne) << endl;

	return 0;
}