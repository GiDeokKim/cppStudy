#include <iostream>
#include "Resource.h"

void doSomething(std::unique_ptr<Resource> res)
{

}

int main()
{
	doSomething(std::make_unique<Resource>(3));


	Resource* res = new Resource(3);
	res->setAll(1);

	{
		std::shared_ptr<Resource> ptr1(res);
		//auto ptr1 = std::make_shared<Resource>(3);
	
		ptr1->print();

	
		{
			std::shared_ptr<Resource> ptr2(ptr1);
			//std::shared_ptr<Resource> ptr2(res); // 이렇게 사용하면 카운팅이 안되어서 문제 생김
			//auto ptr2 = ptr1; // 가능

			ptr2->setAll(3);
			ptr2->print();

			std::cout << "Going out of the block" << std::endl;
		}


		ptr1->print();
		std::cout << "Going out of the outer block" << std::endl;
	}

	return 0;
}