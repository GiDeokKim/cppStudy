// auto Ű����� �ڷ��� �߷� Type inference

#include <iostream>

/* 1. auto Ű���带 ������ ���
int main()
{
	using namespace std;

	// r-value 123�� int��� �ǹ̸� ��ǥ�Ѵ�.
	// �տ� ����ϴ� �ڷ����� int�� �ߺ��� ������ ����ִ�.
	int a = 123;

	// auto�� ������ �ݵ�� �ʱ�ȭ�� �ؾ��Ѵ�.
	auto b = 123123123123123123;
	auto d = 123.0;
	auto c = 1 + 2.0; // �ڵ� ����ȯ

	return 0;
}//*/

/* 2. �Լ��� return ���� auto Ű���� ���
int add(int x, int y)
{
	return x + y;
}

int main()
{
	using namespace std;

	auto result = add(1, 2);

	return 0;
}//*/

/* 3. �Լ� ���� ��ü���� auto Ű���� ���
auto add(int x, int y)
{
	return x + y;
}

int main()
{
	using namespace std;

	auto result = add(1, 2);

	return 0;
}//*/

/* 4. return ���� double�� ���ص� �� �۵�
auto add(int x, int y)
{
	return x + (double)y;
}

int main()
{
	using namespace std;

	auto result = add(1, 2);

	return 0;
}//*/

/* 5. auto�� �Ű� ������ ��� �Ұ�
auto add(auto x, auto y) // �Ұ����� ǥ��
{
	return x + (double)y;
}

// �Ʒ��� ���� �پ��� �ڷ����� �ִ� ���� �����̰�
// �Լ��� �� ���� ����� �ʹٸ�
// template�� ����ϸ� �ȴ�.
auto add(int x, int y)
{
	return x + (double)y;
}

auto add(double x, double y)
{
	return x + y;
}//*/

// 6. function trailing return type
auto add(int x, int y) -> double;

int main()
{
	using namespace std;

	auto result = add(1, 2);

	return 0;
}

auto add(int x, int y) -> double
{
	return x + (double)y;
}//*/