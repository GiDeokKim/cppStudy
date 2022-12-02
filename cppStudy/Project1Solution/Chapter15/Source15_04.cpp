#include "Timer.h"
#include "AutoPtr.h"
#include "Resource.h"

template<class T>
void MySwap(T& a, T& b)
{
	/*T tmp = a;
	a = b;
	b = tmp;*/

	T tmp{ std::move(a) };
	a = std::move(b);
	b = std::move(tmp);
}

int main()
{
	//{
	//	AutoPtr<Resource> res1(new Resource(100000000));

	//	std::cout << res1.m_ptr << std::endl;

	//	//AutoPtr<Resource> res2 = res1;
	//	AutoPtr<Resource> res2 = std::move(res1);

	//	std::cout << res1.m_ptr << std::endl; // res1을 쓰면 안되는데 쓰는건 프로그래머의 책임
	//	std::cout << res2.m_ptr << std::endl;
	//}

	/*{
		AutoPtr<Resource> res1(new Resource(3));
		res1->setAll(3);

		AutoPtr<Resource> res2(new Resource(5));
		res2->setAll(5);

		res1->print();
		res2->print();

		MySwap(res1, res2);

		res1->print();
		res2->print();
	}*/

	//{
	//	std::vector<std::string> v;
	//	std::string str = "Hello";

	//	v.push_back(str);

	//	std::cout << str << " " << str.size() << std::endl;
	//	std::cout << v[0] << std::endl;

	//	v.push_back(std::move(str)); // r-value에 대한 동작도 이미 구현되어 있음

	//	std::cout << str << " " << str.size() << std::endl;
	//	std::cout << v[0] << " " << v[1] << std::endl;
	//}

	{
		std::string x{ "abc" };
		std::string y{ "de" };

		std::cout << "x: " << x << std::endl;
		std::cout << "y: " << y << std::endl;

		MySwap(x, y);

		std::cout << "x: " << x << std::endl;
		std::cout << "y: " << y << std::endl;
	}

	return 0;
}