// 반복문 for
// while문은 일단 돌리고 보자의 느낌
// for문은 반복 횟수가 정해졌을 때 자주 사용

#include <iostream>

//int main()
//{
//	using namespace std;
//
//	//1 초기화(한번 수행) 2 조건 체크 3 반복문 바디 수행 4 count 증가
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
//	for (; count < 10; ++count) // 이런식으로도 사용 가능
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
//	for (; ; ++count) // 무한루프
//	for (; ; count += 2) // 2씩 증가
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

// 2중 for문 사용 예시 추가
// unsigned int로 반복문을 돌리고 변수를 빼는 실행으로 돌리면 오버플로우를 겪게 된다.