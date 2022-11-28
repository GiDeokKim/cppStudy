// stack unwinding
#include <iostream>

//void last() throw(int) exception specifier
//void last() throw(...) exception specifier
//void last() throw() 예외를 안던지겠다는 의미

void last() throw(int)
{
	std::cout << "last" << std::endl;
	std::cout << "Throws exception" << std::endl;

	throw - 1;

	std::cout << "End last" << std::endl;
}

void third()
{
	std::cout << "third" << std::endl;

	last();

	std::cout << "End third" << std::endl;
}

void second()
{
	std::cout << "second" << std::endl;

	try
	{
		third();
	}
	catch (double)
	{
		std::cerr << "second caught int exception" << std::endl;
	}

	std::cout << "End second" << std::endl;
}

void first()
{
	std::cout << "first" << std::endl;

	try
	{
		second();
	}
	catch (int)
	{
		std::cerr << "first caught int exception" << std::endl;
	}

	std::cout << "End first" << std::endl;
}

int main()
{
	// cout, cerr, clog
	std::cout << "Start" << std::endl;

	try
	{
		first();
	}
	catch (int)
	{
		std::cerr << "main caught int exception" << std::endl;
	}
	// uncaught exceptions

	//catch (...) // catch-all handlers
	//{
	//	std::cerr << "main caught ellipses exception" << std::endl;
	//}

	std::cout << "End main" << std::endl;

	return 0;
}