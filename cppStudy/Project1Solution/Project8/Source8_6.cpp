// 소멸자
// Destructors
// 변수가 존재할 영역을 벗어날 때 호출하는 함수
// 소멸자는 instance가 메모리에서 해제될 때 내부에서
// 자동으로 호출된다. 동적할당으로 만들어진 경우에는
// 영역을 벗어나도 자동으로 메모리가 해제되지 않기 때문에
// delete로 메모리를 해제할 때에만 소멸자가 호출된다.
// 소멸자를 프로그래메거 직접 호출하는 것은 대부분의 경우
// 권장하지 않는다.


#include <iostream>
using namespace std;

class Simple
{
private:
	int m_id;

public:
	Simple(const int& id_in)
		: m_id(id_in)
	{
		cout << "Consturctor " << m_id << endl;
	}

	~Simple()
	{
		cout << "Desturctor " << m_id << endl;
	}

};

class IntArray
{
private:
	int* m_arr = nullptr; // 동적할당이 싫다면 vector를 쓰자
	int m_length = 0;
	// new/delete는 느리다.
public:
	IntArray(const int length_in)
	{
		m_length = length_in;
		m_arr = new int[m_length];

		cout << "Constructor " << endl;
	}

	~IntArray()
	{
		if (m_arr != nullptr)
			delete[] m_arr;

		cout << "Destructor " << endl;
	}

	int getLength() { return m_length; }
};

int main()
{
	//Simple s1(0);
	Simple* s1 = new Simple(0); // 동적 할당
	Simple s2(1);

	delete s1;



	while (true) // 메모리 누수 발생(스택과 힙 강의 참고)
	{
		IntArray my_int_arr(10000);
		// 여기서 메모리를 지울 수 없음
	}


	return 0;
}