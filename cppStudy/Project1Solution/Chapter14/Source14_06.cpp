// 예외처리의 위험성과 단점
#include <iostream>
//#include <memory>

class A
{
public:
	~A()
	{
		throw "error"; // 금기되는 행위 compile warning
	}
};

int main()
{
	try
	{
		//int* i = new int[1000000];
		//std::unique_ptr<int> up_i(i);

		//// memory leak
		//throw "error";

		////delete[] i;
		A a;
	}
	catch (...)
	{
		std::cout << "Catch" << std::endl;
	}

	return 0;
}