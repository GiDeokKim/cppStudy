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
			return; // Hello가 실행 안됨
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
//	} while (count < 10); // 무한 루프 빠짐
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
		char ch; // 무한 반복에서 비효율적일 수 있음. 밖에 있는 것이 좋음
		cin >> ch;

		cout << ch << " " << count++ << endl;

		if (ch == 'x')
			escape_flag = true;
	}

	return 0;
}

int main() // 바로 위와 같아진다.
{
	int count(0);

	while (true)
	{
		char ch; // 무한 반복에서 비효율적일 수 있음. 밖에 있는 것이 좋음
		cin >> ch;

		cout << ch << " " << count++ << endl;

		if (ch == 'x')
			break;
	}

	return 0;
}