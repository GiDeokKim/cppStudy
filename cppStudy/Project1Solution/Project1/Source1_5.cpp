#include <iostream>

using namespace std;

int multiplyTwoNumbers(int num_a, int num_b)
{
	int mul = num_a * num_b;

	return mul;
}

// ��ȯ���� ���� ������ void
void printHelloWorld()
{
	cout << "Hello World" << endl;

	return;// �̰� ���൵ �ǰ� �����൵ �ȴ�.

	// ������ return�� �߱� ������ ������ �� ����.
	cout << "Hello World2" << endl;
}

void print()
{
	cout << "Hello" << endl;
}

int addTwoNumbers(int num_a, int num_b)
{
	int sum = num_a + num_b;
	//�Լ� �ȿ��� �Լ��� ������ �� ������ ȣ���� �����ϴ�.
	print();
	return sum;
}

int main()
{
	//�Լ� ������ �����ϴ�
	cout << multiplyTwoNumbers(7, 2) << endl;
	cout << multiplyTwoNumbers(3, 4) << endl;
	cout << multiplyTwoNumbers(8, 13) << endl;

	//main�� �Լ��ε� addTwoNumbers �Լ��� ȣ���ϰ� �ִ�. �Լ��� �Լ��� ȣ���� �� �ִ�.
	int sum = addTwoNumbers(1, 2);

	return 0;//12333
}