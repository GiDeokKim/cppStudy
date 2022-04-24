// cin console in
// cout console out
// endl end line
#include <iostream> //input output stream
#include <cstdio>

int main()
{
	using namespace std; //이 명령문이 입력된 코드 영역에서는 이제 std::을 생략해도 된다.
	// 컴파일러가 cout이나 endl을 만났을 때, std라는 namespace 안에서 컴파일러가 직접 찾아서 
	// 컴파일을 해준다.

	int x = 1024;
	double pi = 3.141592;

	// namespace 이름공간/명칭공간 cout은 std라는 namespace 안에 정의되어 있다.
	std::cout << "I love this lecture!\n"; // << std::endl;
	// <<라는 스트림을 타고 cout으로 들어간다.
	std::cout << "x is " << x << " pi is " << pi << std::endl;
	// pi는 일부가 잘린다. 출력 정밀도 조정이 필요하다!

	std::cout << "abc" << "\t" << "def" << std::endl;
	std::cout << "ab" << "\t" << "cdef" << std::endl;
	// \t는 탭을 의미한다. \t은 빈공간을 주면서 줄맞춤까지 하고 싶을 때 사용하면 좋다.
	// \t는 하나의 기능으로 작동하며 두 글자가 아니다.

	cout << "\a"; // audio의 약자. 소리를 출력해준다.
	//printf("I love this lecture!\n");

	int z = 1;

	cout << "Before your input, z was " << z << endl;

	//x로 input이 흘러들어가는 형태
	cin >> z; //100000000000000000000000과 같은 큰 수를 넣는 경우를 생각하면 입력 유효성 검증이 필요
	
	cout << "Your input is " << z << endl;

	return 0;
}