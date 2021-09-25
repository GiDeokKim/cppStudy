// ��ó������� ù ����
// Preprocessor

#include <iostream>

using namespace std;

// ��ũ�� �ڵ� ���� ������ ��� ������ ������ ��ü�ϴ� �۾��� �Ѵ�.
// ��ũ�η� �Լ��� ����� ���� ��õ���� �ʴ´�.(�ʹ��� ���� ��ȣ ġ��)
#define MY_NUMBER 333
#define MAX(a, b) (((a)>(b)) ? (a) : (b))

#include <algorithm> // max �Լ��� ���� ������ �ش� ���̺귯���� ����

// ��ó���� �ȿ����� ������ ������ ��ü�ϴ� �۾��� ���ϹǷ� �ڿ� ������ �ʿ䰡 ����.
// �� ��ũ�δ� �ۼ��� ���� �������� ������� ������.(#include�� ���� ���°� �ƴ϶��)
#define LIKE_APPLE 

// �ٸ� �ڵ忡 ���ǵǾ� �ִ� �Լ�
void doSomething();

int main()
{
	cout << MY_NUMBER << endl;

	cout << std::max(1, 2) << endl;

#ifdef LIKE_APPLE
	cout << "Apple " << endl;
#endif

#ifndef LIKE_APPLE
	cout << "Orange " << endl;
#endif

#ifdef LIKE_APPLE
	cout << "Apple " << endl;
#else
	cout << "Orange " << endl;
#endif

	doSomething();

	return 0;
}
