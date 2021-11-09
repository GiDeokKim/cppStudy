// ���� ����, ���� ����, ���� ����, �ܺ� ����
// Global Variables, Static Variables, Internal Linkage, External Linkage

// ���� ����
// �ܺ� ����

#include <iostream>
#include "My_const.h"
using namespace std;

// global variable
int value = 123;
//int a = 1; // main �Լ������� a�� ������ �� �ִ�.

// �ش� cpp �ȿ����� �������� ����ϴ� ���� �ٸ� �������� ���� �Ұ���
static int static_global_variable = 1;

void doSomething()
{
	// ���� ����(�޸𸮰� static�̴�, �޸𸮰� �������� ����ȴ�)
	// �� �Լ��� ��� ȣ��Ǵ��� ������غ��� ����Ѵ�.
	// main �Լ������� a�� ������ ���� ����.
	static int a = 1; // ���� ���� ������ doSomething �� �ȿ����� ���� �޸𸮸� ����ϰ� �ȴ�.
	++a;
	cout << a << endl;
}

// forward declaration
// extern�� �����Ǿ� �ִ�.
/*extern*/ void doSomething2();
// ���� cpp �ȿ��� �ٷ� �� �ִ� ���� ����
extern int exA; //1>Source4_2.obj : error LNK2001: unresolved external symbol "int exA" (?exA@@3HA)
//1>Source4_2_1.obj : error LNK2005: "int exA" (?exA@@3HA) already defined in Source4_2.obj

int main()
{

	// ���� ������ ���
	cout << value << endl;

	// name hiding
	int value = 1;

	// ���� ������(���� ������ ��½�Ų��)
	cout << ::value << endl;

	// ���� ������ ���
	cout << value << endl;

	cout << "���� ���� �׽�Ʈ" << endl;
	// ���� ���� �׽�Ʈ
	doSomething();
	doSomething();
	doSomething();
	doSomething();


	cout << "Linkage" << endl;

	doSomething2();
	cout << exA << endl;


	// ���̰� �ߺ��ǰ� �����Ѵ�. �޸� ����
	cout << "In main.cpp file" << Constants::pi << " " << &Constants::pi << endl;
	return 0;
}