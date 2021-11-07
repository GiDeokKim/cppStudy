// ���� ��� ����

#include <iostream>

using namespace std;

class Something
{
public:
	// error C2864: 'Something::m_value': a static data member with an in-class initializer must have non-volatile const integral type or be specified as 'inline'
	//static int s_value; // = 1; static ��� ������ �ʱ�ȭ�� �Ұ����ϴ�.
	static const int s_value = 1; //constexpr�� ������ Ÿ�ӿ� ���� �����Ǿ���� const�� ��Ÿ�ӿ����� ����



};

//int Something::s_value = 1; // define in cpp ������Ͽ� �θ� �ߺ� �������� ���� ���� static const�� ��� ��� �Ұ�

int main()
{
	// �ν��Ͻ��� ��� ������
	cout << &Something::s_value << " " << Something::s_value << endl;

	Something st1;
	Something st2;

	//st1.s_value = 2; //static const�� ��� ��� �Ұ�

	// static�� ��� �ּҿ� ���� ������ �ƴϸ� ���� �ٸ�
	cout << &st1.s_value << " " << st1.s_value << endl;
	cout << &st2.s_value << " " << st2.s_value << endl;

	//Something::s_value = 1234; //static const�� ��� ��� �Ұ�
	cout << &Something::s_value << " " << Something::s_value << endl;

	return 0;
}