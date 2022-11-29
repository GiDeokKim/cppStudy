#include <iostream>

class Exception
{
public:
	void report()
	{
		std::cerr << "Exception report" << std::endl;
	}
};

class ArrayException : public Exception
{
public:
	void report()
	{
		std::cerr << "Array report" << std::endl;
	}
};

class MyArray
{
private:
	int m_data[5];

public:
	int& operator[] (const int& index)
	{
		if (index < 0 || index >= 5)
		{
			// throw - 1;
			throw ArrayException();
		}

		return m_data[index];
	}
};

void doSomething()
{
	MyArray my_array;

	try
	{
		my_array[100];
	}
	catch (const int& x)
	{
		std::cerr << "Exception " << x << std::endl;
	}
	//catch (ArrayException& e) // case 1
	//{
	//	std::cout << "doSomething()" << std::endl;
	//	e.report();
	//	throw e;// mainÀ¸·Î ´øÁü
	//}
	catch (Exception& e) // case 2
	{
		std::cout << "doSomething()" << std::endl;
		e.report();
		//throw e;// mainÀ¸·Î ´øÁü(°´Ã¼ Àß¸² ¹ß»ý)
		throw;
	}
}

int main()
{
	try
	{
		doSomething();
	}
	catch(ArrayException& e)
	{
		std::cout << "main()" << std::endl;
		e.report();
	}
	catch (Exception& e)
	{
		std::cout << "main()" << std::endl;
		e.report();
	}
	
	

	return 0;
}