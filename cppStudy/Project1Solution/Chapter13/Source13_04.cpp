#include <iostream>
#include "Storage.h"

//template<typename T>
//T getMax(T x, T y)
//{
//	return (x > y) ? x : y;
//}
//
//template<> // specialization
//char getMax(char x, char y)
//{
//	std::cout << "Warning : comparing chars" << std::endl;
//
//	return (x > y) ? x : y;
//}

int main()
{
	//std::cout << getMax(1, 2) << std::endl; // getMax<int>(1, 2)∑Œ instanciation«‘
	//std::cout << getMax('a', 'b') << std::endl;

	Storage<int> nValue(5);
	Storage<double> dValue(6.7);

	nValue.print();
	dValue.print();

	return 0;
}