// �ݺ��� for
// while���� �ϴ� ������ ������ ����
// for���� �ݺ� Ƚ���� �������� �� ���� ���

#include <iostream>

//int main()
//{
//	using namespace std;
//
//	//1 �ʱ�ȭ(�ѹ� ����) 2 ���� üũ 3 �ݺ��� �ٵ� ���� 4 count ����
//	for (int count = 0; count < 10; ++count)
//	{
//		cout << count << endl;
//	}
//
//	return 0;
//}


//int main()
//{
//	using namespace std;
//
//	int count = 0;
//	for (; count < 10; ++count) // �̷������ε� ��� ����
//	{
//		cout << count << endl;
//	}
//	cout << count << endl;
//
//	return 0;
//}


//int main()
//{
//	using namespace std;
//
//	int count = 0;
//	for (; ; ++count) // ���ѷ���
//	for (; ; count += 2) // 2�� ����
//	{
//		cout << count << endl;
//	}
//	cout << count << endl;
//
//	return 0;
//}


//auto pow(int base, int exponent)->int
//{
//	int result = 1;
//
//	for (int count = 0; count < exponent; ++count)
//		result *= base;
//
//	return result;
//}
//
//int main()
//{
//	using namespace std;
//
//	cout << pow(2, 4) << endl;
//
//	return 0;
//}


int main()
{
	using namespace std;

	for (int i = 0, j = 0; i < 10; ++i, --j)
	{
		cout << i << " " << j << endl;
	}

	return 0;
}

// 2�� for�� ��� ���� �߰�
// unsigned int�� �ݺ����� ������ ������ ���� �������� ������ �����÷ο츦 �ް� �ȴ�.