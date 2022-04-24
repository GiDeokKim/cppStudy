// ���ӽ����̽� (��Ī ����)
// namespace
// ���� ������ �Ű������� ���鼭 ���� �̸��� �Լ��� ����ؾ� �� ��
// Ȥ�� Ư���ϰ� �����ؾ� �� ��


#include <iostream>

namespace MySpace1
{
	// ���ӽ����̽� �ȿ� ���ӽ����̽� ����
	namespace InnerSpace
	{
		int myFunction()
		{
			return 0;
		}
	}
	int doSomething(int a, int b)
	{
		return a + b;
	}
}

namespace MySpace2
{

	int doSomething(int a, int b)
	{
		return a * b;
	}
}


using namespace std;

int main()
{
	
	// 3*4�� ����ȴ�.
	cout << MySpace2::doSomething(3, 4) << endl;

	//������ MySpace1�̶�� namespace�� ����� ���̴�.
	using namespace MySpace1;

	// 3+4�� ����ȴ�.
	cout << doSomething(3, 4) << endl;
	InnerSpace::myFunction();

	return 0;
}