#include <iostream>
#include "My_const.h"
extern int exA = 1111;
void doSomething2()
{
	using namespace std;

	cout << "Hello" << endl;

	cout << "In 4_2_1.cpp file" << Constants::pi << " " << &Constants::pi << endl;
}