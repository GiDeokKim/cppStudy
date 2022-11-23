#include "MyArray.h"

int main()
{
	//MyArray my_array(10);
	MyArray<int> my_array(10);
	MyArray<char> my_array2(10);

	for (int i = 0; i < my_array.getLength(); ++i)
	{
		my_array[i] = i * 10;
	}

	my_array.print();

	for (int i = 0; i < my_array2.getLength(); ++i)
	{
		my_array2[i] = i + 65;
	}

	my_array2.print();

	return 0;
}