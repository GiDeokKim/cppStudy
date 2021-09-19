#include <iostream>

using namespace std;

int multiplyTwoNumbers(int num_a, int num_b)
{
	int mul = num_a * num_b;

	return mul;
}

// 반환해줄 값이 없을땐 void
void printHelloWorld()
{
	cout << "Hello World" << endl;

	return;// 이건 해줘도 되고 안해줘도 된다.

	// 위에서 return을 했기 때문에 도달할 수 없다.
	cout << "Hello World2" << endl;
}

void print()
{
	cout << "Hello" << endl;
}

int addTwoNumbers(int num_a, int num_b)
{
	int sum = num_a + num_b;
	//함수 안에서 함수를 선언할 수 없지만 호출은 가능하다.
	print();
	return sum;
}

int main()
{
	//함수 재사용이 가능하다
	cout << multiplyTwoNumbers(7, 2) << endl;
	cout << multiplyTwoNumbers(3, 4) << endl;
	cout << multiplyTwoNumbers(8, 13) << endl;

	//main도 함수인데 addTwoNumbers 함수를 호출하고 있다. 함수가 함수를 호출할 수 있다.
	int sum = addTwoNumbers(1, 2);

	return 0;//12333
}