// R-value References
#include <iostream>

void doSomething(int& lref)
{
	std::cout << "L-value ref" << std::endl;
}

void doSomething(int&& rref)
{
	std::cout << "R-value ref" << std::endl;
}


int getResult()
{
	return 100 * 100;
}


int main()
{
	int x = 5;
	int y = getResult();
	const int cx = 6;
	const int cy = getResult();

	// L-value references
	int& lr1 = x;			// Modifiable l-values
	//int& lr2 = cx;		// Non-modifiable l-values
	//int& lr3 = 5;			// R-values

	const int& lr4 = x;		// Modifiable l-values
	const int& lr5 = cx;	// Non-modifiable l-values
	const int& lr6 = 5;		// R-values

	// R-value references

	//int&& rr1 = x;		// Modifiable l-values
	//int&& rr2 = cx;		// Non-modifiable l-values
	int&& rr3 = 5;			// R-values

	std::cout << rr3 << std::endl;
	rr3 = 10;
	std::cout << rr3 << std::endl;

	//const int&& rr4 = x;	// Modifiable l-values
	//const int&& rr5 = cx;	// Non-modifiable l-values
	const int&& rr6 = 5;	// R-values

	// L/R-value reference parameters
	doSomething(x);
	//doSomething(cx);
	doSomething(5);
	doSomething(getResult());

	return 0;
}