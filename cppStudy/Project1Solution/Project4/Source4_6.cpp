// 문자열 소개
#include <iostream>

/* 1. C 스타일 문자열은 배열이며 마지막에 널 문자('\0')가 들어간다.
int main()
{
	using namespace std;

	// 커서를 가져다 올리면 13 길이 배열이라고 표시됨.
	cout << "Hello, World" << endl;
	const char my_strs[] = "Hello, World";

	return 0;
}//*/

#include <string>

/* 2. string은 프로그래머의 편의를 위해 만들어진 사용자 정의 자료형
int main()
{
	using namespace std;

	const string my_hello = "Hello, World";
	//const string my_hello("Hello, World");
	//const string my_hello{ "Hello, World" };

	cout << my_hello << endl;

	return 0;
}//*/

/* 3. 정수를 string으로 암시적 형변환을 해주진 않는다.
int main()
{
	using namespace std;

	// ""를 삭제하고 넣으면 에러가 뜬다.
	const string my_ID = "123";

	return 0;
}//*/

/* 4. string 입력하기.
int main()
{
	using namespace std;

	// Jack Jack 입력하면 다 넘어감.(중간에 빈칸 있는 이름)
	cout << "Your name ? : ";
	string name;
	cin >> name; // 빈칸이 있으면 이미 다받은 것으로 판단.

	cout << "Your age ? : ";
	string age;
	cin >> age;

	cout << name << " " << age << endl;

	return 0;
}//*/

/* 4. getline으로 입력 받기.
int main()
{
	using namespace std;

	cout << "Your name ? : ";
	string name;
	getline(cin, name); // enter칠때까지 입력 받을 수 있음.

	cout << "Your age ? : ";
	string age;
	getline(cin, age);

	cout << name << " " << age << endl;

	return 0;
}//*/

#include <limits>

//* 5. 정수를 먼저 받을때 생기는 오작동.
int main()
{
	using namespace std;

	cout << "Your age ? : ";
	int age;
	cin >> age;
	
	// 해결법
	//cin.ignore(32767, '\n'); // 2 byte 가장 큰 signed 정수 32767
	//cin.ignore(numeric_limits<streamsize>::max(), '\n');

	cout << "Your name ? : ";
	string name;
	getline(cin, name); // enter칠때까지 입력 받을 수 있음.

	cout << name << " " << age << endl;

	return 0;
}//*/

/* 6. 문자열 더하기와 문자열 길이 출력하기.
int main()
{
	using namespace std;

	string a("Hello, ");
	string b("World");

	// 더하기 연산자가 string 내에 오버로딩되어 있음.
	string hw = a + b; // append

	// 12 길이(C 스타일과 길이가 1 차이남.)
	cout << hw.length() << endl;

	hw += " I'm good";
	cout << hw << endl;


	return 0;
}//*/