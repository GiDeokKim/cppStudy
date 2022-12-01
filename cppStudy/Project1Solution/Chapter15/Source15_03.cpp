#include "Timer.h"
#include "AutoPtr.h"
#include "Resource.h"

AutoPtr<Resource> generateResource()
{
	AutoPtr<Resource> res(new Resource(100000000));

	return res;
}

int main()
{
	std::streambuf* orig_buf = std::cout.rdbuf();
	//std::cout.rdbuf(NULL); // disconnect cout from buffer

	Timer timer;

	{
		AutoPtr<Resource> main_res;
		main_res = generateResource();
	}

	std::cout.rdbuf(orig_buf);
	std::cout << timer.elapsed() << std::endl;

	return 0;
}