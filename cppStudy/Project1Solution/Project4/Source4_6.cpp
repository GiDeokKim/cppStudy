// 문자열 소개
#include <iostream>
#include <string>
#include <limits>

using namespace std;

int main()
{
	const char my_strs[] = "Hello, World";

	// 프로그래머의 편의를 위해 만들어줌, 사용자 정의 자료형
	const string my_hello = "Hello, World";
	const string my_ID = "123";

	// 커서를 가져다 올리면 13 길이의 배열이다.
	cout << "Hello, World" << endl;

	cout << my_hello << endl;

	// 1 타이핑했더니 바로 이름까지 넘어가네
	cout << "Your age ? : ";
	int age;
	cin >> age;
	
	std::cin.ignore(/*32767*/std::numeric_limits<std::streamsize>::max(), '\n'); // 2 byte 가장 큰 signed 정수 32767

	cout << "Your name ? : ";
	string name;
	//cin >> name;
	std::getline(std::cin, name); // 엔터까지 받아서 한번에 넣어주기

	//cout << "Your age ? : ";
	//string age;
	////cin >> age;
	//std::getline(std::cin, age);

	cout << name << " " << age << endl;

	string a("Hello, ");
	string b("World");
	string hw = a + b; // append

	hw += " I'm good";
	cout << hw << endl;
	cout << hw.length() << endl;

	return 0;
}