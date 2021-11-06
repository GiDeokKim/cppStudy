// �Ҹ���
// Destructors
// ������ ������ ������ ��� �� ȣ���ϴ� �Լ�
// �Ҹ��ڴ� instance�� �޸𸮿��� ������ �� ���ο���
// �ڵ����� ȣ��ȴ�. �����Ҵ����� ������� ��쿡��
// ������ ����� �ڵ����� �޸𸮰� �������� �ʱ� ������
// delete�� �޸𸮸� ������ ������ �Ҹ��ڰ� ȣ��ȴ�.
// �Ҹ��ڸ� ���α׷��ް� ���� ȣ���ϴ� ���� ��κ��� ���
// �������� �ʴ´�.


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
	int* m_arr = nullptr; // �����Ҵ��� �ȴٸ� vector�� ����
	int m_length = 0;
	// new/delete�� ������.
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
	Simple* s1 = new Simple(0); // ���� �Ҵ�
	Simple s2(1);

	delete s1;



	while (true) // �޸� ���� �߻�(���ð� �� ���� ����)
	{
		IntArray my_int_arr(10000);
		// ���⼭ �޸𸮸� ���� �� ����
	}


	return 0;
}