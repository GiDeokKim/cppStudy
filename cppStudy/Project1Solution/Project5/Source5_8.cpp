// break, continue

#include <iostream>

using namespace std;

void breakOrReturn()
{
	while (true)
	{
		char ch;
		cin >> ch;

		if (ch == 'b')
			break;

		if (ch == 'r')
			return; // Hello�� ���� �ȵ�
	}

	cout << "Hello" << endl;
}

//int main()
//{
//	breakOrReturn();
//
//	for (int i = 0; i < 10; ++i)
//	{
//		if (i % 2 == 0) continue;
//
//		cout << i << endl;
//	}
//
//	return 0;
//}

//int main()
//{
//	int count(0);
//
//	do
//	{
//		if (count == 5)
//			continue;
//
//		cout << count << endl;
//
//		count++;
//	} while (count < 10); // ���� ���� ����
//	//while(++count < 10);
//
//	return 0;
//}

int main()
{
	int count(0);
	bool escape_flag = false;
	while(!escape_flag)
	{
		char ch; // ���� �ݺ����� ��ȿ������ �� ����. �ۿ� �ִ� ���� ����
		cin >> ch;

		cout << ch << " " << count++ << endl;

		if (ch == 'x')
			escape_flag = true;
	}

	return 0;
}

int main() // �ٷ� ���� ��������.
{
	int count(0);

	while (true)
	{
		char ch; // ���� �ݺ����� ��ȿ������ �� ����. �ۿ� �ִ� ���� ����
		cin >> ch;

		cout << ch << " " << count++ << endl;

		if (ch == 'x')
			break;
	}

	return 0;
}