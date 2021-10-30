// auto Ű����� �ڷ��� �߷� Type inference

#include <iostream>

//int add(int x, int y)
//{
//	return x + y;
//}

// �Ű��������� auto�� �� �� ����.
// �پ��� �ڷ����� �Ű������� ��������
auto add(int x, int y)
{
	return x + (double)y;
}

//auto add(double x, double y)
//{
//	return x + y;
//}

// template�� ���� ���� ���� ��Ȳ�� �ذ��� �� �ִ�.
// c++ 17 ���ĺ��ʹ� �������� return ���� ���ÿ� ��ȯ�� �� �ִ�.(template ���)


int main()
{
	using namespace std;

	int a = 123;

	auto b = 123123123123123123; // auto�� ������ �ݵ�� �ʱ�ȭ�� �ؾ��Ѵ�.
	auto d = 123.0;
	auto c = 1 + 2.0;
	auto result = add(1, 2);

	return 0;
}