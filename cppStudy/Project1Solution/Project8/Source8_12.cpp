// ģ�� �Լ��� Ŭ����
// ���� ���� ���������� �ڵ� �����ϱ�

#include <iostream>
using namespace std;

// class A ���忡���� B�� ���縦 �𸣱� ������ ���� ���� �ʿ�
class B; // forward declaration

class A
{
private:
	int m_value = 1;

	//friend void doSomething(A& a, B& b);
	
	//friend class B;
	friend void B::doSomething(A& a); // ��� �Լ����� �����ֱ�
};

class B
{
private:
	int m_value = 2;

	/*friend void doSomething(A& a, B& b);*/
public:
	void doSomething(A& a)
	{
		cout << a.m_value << endl;
	}
};

//void doSomething(A& a, B& b)
//{
//	cout << a.m_value << " " << b.m_value << endl;
//}

int main()
{
	A a;
	//doSomething(a);
	B b;
	b.doSomething(a);

	return 0;
}