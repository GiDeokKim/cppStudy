// 친구 함수와 클래스
// 강의 보고 순차적으로 코드 수정하기

#include <iostream>
using namespace std;

// class A 입장에서는 B의 존재를 모르기 때문에 전방 선언 필요
class B; // forward declaration

class A
{
private:
	int m_value = 1;

	//friend void doSomething(A& a, B& b);
	
	//friend class B;
	friend void B::doSomething(A& a); // 멤버 함수에만 열어주기
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