// 난수 만들기 random number generation
// random 라이브러리를 쓰는게 일반적

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
//	//RAND_MAX는 랜덤수 중 가장 큰 수
//	static const double fraction = 1.0 / (RAND_MAX + 1.0);
//
//	return min + static_cast<int>((max - min + 1) * (std::rand() * fraction));
//}
//int main()
//{
//	// 디버깅할때는 시드가 고정되는게 편하다.
//	//std::srand(5323); // seed 이게 고정되면 계속 같은 랜덤 수를 출력함
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
// 제대로 된 랜덤 수를 사용할 수 있다.

using namespace std;

int main()
{
	std::random_device rd;
	std::mt19937 mersenne(rd()); // create a mersenne twister //mersenne 수학자 이름
	std::uniform_int_distribution<> dice(1, 6); // 전부 동일한 확률로 발생

	for (int count = 1; count <= 20; ++count)
		cout << dice(mersenne) << endl;

	return 0;
}