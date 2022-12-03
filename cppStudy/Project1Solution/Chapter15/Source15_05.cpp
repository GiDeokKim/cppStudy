#include <iostream>
#include <memory>
#include "Resource.h"

auto doSomething()
{
	/*auto res1 = std::make_unique<Resource>(5);
	return res1;*/

	//return std::unique_ptr<Resource>(new Resource(5));

	return std::make_unique<Resource>(5);
}

void doSomething2(std::unique_ptr<Resource>& res)
{
	res->setAll(10);
}

void doSomething3(std::unique_ptr<Resource> res)
{
	res->setAll(100);
	res->print();
}

void doSomething4(Resource* res)
{
	res->setAll(100);
	res->print();
}

int main()
{
	//{
	//	Resource* res = new Resource(100000000);

	//	// early return or throw

	//	delete res;
	//}

	/*{
		std::unique_ptr<Resource> res(new Resource(100000));
	}*/

	//{
	//	std::unique_ptr<int> upi(new int);

	//	//std::unique_ptr<Resource> res1(new Resource(5));
	//	auto res1 = std::make_unique<Resource>(5);
	//	//auto res1 = doSomething();

	//	res1->setAll(5);
	//	res1->print();

	//	std::unique_ptr<Resource> res2;

	//	std::cout << std::boolalpha;
	//	std::cout << static_cast<bool>(res1) << std::endl;
	//	std::cout << static_cast<bool>(res2) << std::endl;

	//	//res2 = res1; // unique pointer는 copy 불가
	//	res2 = std::move(res1);

	//	std::cout << std::boolalpha;
	//	std::cout << static_cast<bool>(res1) << std::endl;
	//	std::cout << static_cast<bool>(res2) << std::endl;

	//	if (res1 != nullptr)
	//	{
	//		res1->print();
	//	}

	//	if (res2 != nullptr)
	//	{
	//		res2->print(); //(*res2).print();
	//	}
	//}

	{
		auto res1 = std::make_unique<Resource>(5);
		res1->setAll(1);
		res1->print();

		std::cout << std::boolalpha;
		std::cout << static_cast<bool>(res1) << std::endl;

		//doSomething2(res1);
		//doSomething3(std::move(res1));
		doSomething4(res1.get()); // pointer return

		std::cout << std::boolalpha;
		std::cout << static_cast<bool>(res1) << std::endl;

		res1->print();
	}

	{ // 문제 생김
		Resource* res = new Resource;
		std::unique_ptr<Resource> res1(res);
		std::unique_ptr<Resource> res2(res);

		delete res;
	}

	return 0;
}