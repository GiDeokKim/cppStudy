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
			//std::shared_ptr<Resource> ptr2(res); // �̷��� ����ϸ� ī������ �ȵǾ ���� ����
			//auto ptr2 = ptr1; // ����

			ptr2->setAll(3);
			ptr2->print();

			std::cout << "Going out of the block" << std::endl;
		}


		ptr1->print();
		std::cout << "Going out of the outer block" << std::endl;
	}

	return 0;
}