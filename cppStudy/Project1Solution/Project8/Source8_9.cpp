// 클래스와 const

#include <iostream>
#include <string>

using namespace std;

class Something
{
public:
	int m_value = 0;

	Something(const Something& st_in)
	{
		m_value = st_in.m_value;

		cout << "Copy Constructor" << endl;
	}

	Something()
	{
		cout << "Constructor" << endl;
	}

	void	setValue(int value) 
	{ 
		m_value = value; 
	}
	
	// 함수 뒤에 const를 붙이면 내부에서 멤버 변수를 수정하지 않는다는 것을 알려줌
	int		getValue() const
	{ 
		return m_value;
	}
};

//something이 st에 복사는 되는데 생성자는 안불리네? 복사 생성자 때문
// 직접 만들 수 있지만 자동으로 숨겨져 있다.
//void print(Something st)// 복사 함
void print(const Something& st) // 복사 안함
{
	cout << &st << endl;

	cout << st.getValue() << endl;
}


class Some
{
public:
	string m_value = "default";

	// 오버로딩은 매개변수의 차이로 구성 가능
	// 반환값 차이로는 오버로딩 불가능
	string& getValue() const // 함수 뒤에 const를 붙여서 오버로딩이 가능하다.
	{ 
		cout << "const version" << endl;
		return m_value; 
	};
	string& getValue() 
	{ 
		cout << "non-const version" << endl;
		return m_value; 
	};
};

int main()
{
	//const Something something;

	//// const가 붙은 instance를 쓰면 둘다 안된다.
	//something.setValue(3); // const 멤버 함수 자체가 안됨 이미 내부에서 변경하고 있기 때문
	//cout << something.getValue() << endl; // const 멤버 함수일 경우 사용가능해짐

	Something something;

	cout << &something << endl;

	print(something);

	Some st1;
	st1.getValue(); // = 10;으로 값 변경 가능
	const Some st2;
	st2.getValue(); // 값 변경 불가능
	return 0;
}