// �ɺ��� ��� Symbolic Constants
// c++ 11 constexpr

#include <iostream>
#include "MY_CONSTANTS.h" // ����� �� ��� ���Ͽ� ��Ƶθ� ������ ���ϴ�.

// ��ũ�κ��� const�� �� ����.
// c���� ���� ���� c++������ �� �Ⱦ���. why? ��������� �ʹ� �д�.
#define PRICE_PER_ITEM 30

using namespace std;

// const Ű���带 �Ű������� ����Ͽ� �Լ� ���ο��� �ش� ������ �ٲ��� ���ϵ��� �����Ѵ�.
void printNumber(const int my_number)
{
	cout << my_number << endl;
}

int main()
{
	printNumber(123);

	// ������Ÿ�ӿ��� ������(������Ÿ�� ���)
	const double gravity = 9.8; // ���Ŀ� �ش� ���� �����Ϸ��Ҷ� �����Ϸ��� �����ش�.
	//double const gravity = 9.8; // ��ó�� �����ص� �����ϴ�.
	// �ɺ��� ����� ����� ���ÿ� �ʱ�ȭ�� �ؾ��Ѵ�.

	int number;
	cin >> number;

	// ��Ÿ�ӿ��� ������(��Ÿ�� ���)
	const int special_number(number); // ����ڰ� �Է��ϴ� �ɺ��� ���

	// ������Ÿ�ӿ��� �������ٴ� ���� Ű����� ǥ���Ѵ�.
	constexpr int price_per_item = 123;

	int num_item = 123;
	int price = num_item * price_per_item;

	double radius;
	cin >> radius;
	double circumference = 2.0 * radius * constants::pi;

	return 0;
}