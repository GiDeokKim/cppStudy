// 문자형 char type
// 문자는 ASCII CODE로 대응시켜서 다룬다.

#include <iostream>
#include <limits>

int main()
{
	using namespace std;

	// 한글자를 표현할 때는 홑따옴표를 사용한다.
	char c1(65);
	char c2 = 'A'; 

	cout << c1 << " " << c2 << " " << int(c1) << " " << int(c2) << endl;


	// char 자료형 한계치 확인
	cout << sizeof(char) << endl;
	cout << (int)numeric_limits<char>::max() << endl;
	cout << (int)numeric_limits<char>::lowest() << endl;


	// stream을 사용하면 넘친 input 값을 버퍼에 저장하고 있는다.
	// 그 뒤에 다시 입력 받는 명령이 있다면 넘친 input 값을 넣는다.
	cin >> c1;
	cout << c1 << " " << static_cast<int>(c1) << endl;

	cin >> c1;
	cout << c1 << " " << static_cast<int>(c1) << endl;

	cin >> c1;
	cout << c1 << " " << static_cast<int>(c1) << endl;


	cout << "This is first line \nsecond line\n"; // 버퍼에 담기기만하고 줄바꿈을 안할 수도 있음
	cout << "This is first line " << endl << "second line" << endl; // endl은 버퍼에 있는 것을 출력한 뒤에 줄바꿈을 수행함
	//std::flush
	cout << int('\n') << endl;


	// c-style casting(강제 변환)
	cout << (char)65 << endl;
	cout << (int)'A' << endl;

	//cpp-style casting(강제 변환)
	cout << char(65) << endl;
	cout << int('A') << endl;

	// 추후 설명(기본형에 대한 변환을 컴파일러에게 미리 알림)
	cout << static_cast<char>(65) << endl;
	cout << static_cast<int>('A') << endl;

	// 위의 3개는 같은 결과를 보인다.


	//static_cast를 사용한다고해서 기존에 있는 것이 변하는 것은 아님
	char ch(97);
	cout << ch << endl;
	cout << static_cast<int>(ch) << endl;
	cout << ch << endl;


	return 0;
}