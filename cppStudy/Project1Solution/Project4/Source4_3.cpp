// using���� ��ȣ��

#include <iostream>

namespace a
{
	int my_var(10);
	int my_a(123);
}

namespace b
{
	int my_var(20);
	int my_b(456);
}


int main()
{
	using namespace std;
	// using std::cout; // ���̿� namespace�� ���� �ʴ´�.
	// using std::endl;

	cout << "Hello " << endl;


	//using namespace a; // ������� �������� ����ع����� �ش� ����� ��Ŭ����ϴ� ���Ͽ� ��� ������ �ش�.
	//using namespace b; // ���� cpp�� �ִ°��� ����.

	// cout << my_var << endl; // a�� b�� �Ѵ� ������ ��ȣ����
	cout << a::my_var << endl; // �������� �����ڸ� ���� �ذ� ����



	{
		using namespace a; // �ѹ� �����ϸ� ����� ����� ����. ���� ������ ������ ������ �������Ѵ�.
		cout << my_var << endl;
	}

	{
		using namespace b;
		cout << my_var << endl;
	}

	return 0;
}