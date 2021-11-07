// Ŭ������ const

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
	
	// �Լ� �ڿ� const�� ���̸� ���ο��� ��� ������ �������� �ʴ´ٴ� ���� �˷���
	int		getValue() const
	{ 
		return m_value;
	}
};

//something�� st�� ����� �Ǵµ� �����ڴ� �ȺҸ���? ���� ������ ����
// ���� ���� �� ������ �ڵ����� ������ �ִ�.
//void print(Something st)// ���� ��
void print(const Something& st) // ���� ����
{
	cout << &st << endl;

	cout << st.getValue() << endl;
}


class Some
{
public:
	string m_value = "default";

	// �����ε��� �Ű������� ���̷� ���� ����
	// ��ȯ�� ���̷δ� �����ε� �Ұ���
	string& getValue() const // �Լ� �ڿ� const�� �ٿ��� �����ε��� �����ϴ�.
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

	//// const�� ���� instance�� ���� �Ѵ� �ȵȴ�.
	//something.setValue(3); // const ��� �Լ� ��ü�� �ȵ� �̹� ���ο��� �����ϰ� �ֱ� ����
	//cout << something.getValue() << endl; // const ��� �Լ��� ��� ��밡������

	Something something;

	cout << &something << endl;

	print(something);

	Some st1;
	st1.getValue(); // = 10;���� �� ���� ����
	const Some st2;
	st2.getValue(); // �� ���� �Ұ���
	return 0;
}