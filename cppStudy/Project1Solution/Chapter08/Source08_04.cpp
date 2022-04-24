// 생성자의 멤버 이니셜라이져 리스트
// Member Initializer List

#include <iostream>
using namespace std;

class B
{
private:
	int m_b;

public:
	B(const int& m_b_in)
		: m_b(m_b_in)
	{}
};

class Something
{
private:
	int		m_i = 100;
	double	m_d = 100.0;
	char	m_c = 'F';
	int		m_arr[5];
	B		m_b;

public:
	Something()
		: m_i{ 1 } // 1열로 쓸 수도 있다.
		, m_d{ 3.14 } // 생성자 멤버 초기화1
		, m_c{ 'a' }
		, m_arr{ 1,2,3,4,5 }
		, m_b(m_i - 1)
	{
		/*m_i = 1;
		m_d = 3.14;
		m_c = 'a';*/ //멤버 초기화2
	}

	void print()
	{
		cout << m_i << " " << m_d << " " << m_c << endl;
		for (auto& e : m_arr)
			cout << e << " ";
	}
};

int main()
{
	Something som;
	som.print();

	return 0;
}