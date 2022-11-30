#include "Resource.h"
#include "AutoPtr.h"

// RAII : resource acquisition is initialization

void doSomething()
{
	//Resource* res = new Resource; // dull pointer
	AutoPtr<Resource> res(new Resource); // smart pointer

	// work with res
	if (true)
	{
		//delete res;
		return; // early return
	}

	//delete res;

	return;
}

int main()
{
	doSomething();

	{
		AutoPtr<Resource> res1(new Resource);
		AutoPtr<Resource> res2;

		std::cout << std::boolalpha;

		std::cout << res1.m_ptr << std::endl;
		std::cout << res2.m_ptr << std::endl;

		// move semantics
		res2 = res1; // 소유권 이동을 안해주면 문제 생김

		std::cout << res1.m_ptr << std::endl;
		std::cout << res2.m_ptr << std::endl;
	}

	// value semantics(copy semantics)
	// reference semantics(pointer)
	// move semantics(move)


	return 0;
}