// ����ó���� ���輺�� ����
#include <iostream>
//#include <memory>

class A
{
public:
	~A()
	{
		throw "error"; // �ݱ�Ǵ� ���� compile warning
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