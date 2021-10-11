// 불리언 자료형과 조건문 if
// Boolean
// true(1) / false(0)

#include <iostream>

bool isEqual(int a, int b)
{
	bool result = (a == b);

	return result;
}

int main()
{
	using namespace std;

	bool b1 = true;		// copy initialization
	bool b2(false);		// direct initialization
	bool b3{ true };	// uniform initialization
	b3 = false;			// assignment operator

	cout << std::boolalpha;
	cout << b3 << endl;
	cout << b1 << endl;
	cout << std::noboolalpha;
	cout << b3 << endl;
	cout << b1 << endl;

	// ! not operator 안쓸 수 있다면 안쓰는게 좋다.

	// 논리 연산자 &&(and) 
	cout << (true	&& true)	<< endl; // true
	cout << (true	&& false)	<< endl; // false
	cout << (false	&& true)	<< endl; // false
	cout << (false	&& false)	<< endl; // false

	// 논리 연산자 ||(or) 
	cout << (true	|| true)	<< endl; // true
	cout << (true	|| false)	<< endl; // true
	cout << (false	|| true)	<< endl; // true
	cout << (false	|| false)	<< endl; // false

	//if (false)
	if (true)
		cout << "This is true" << endl;
	else
		cout << "This is false" << endl;

	cout << std::boolalpha;
	cout << isEqual(1, 1) << endl;
	cout << isEqual(0, 5) << endl;

	// 0을 제외한 모든 수는 true
	if (5)
		cout << "This is true" << endl;
	else
		cout << "This is false" << endl;

	bool b;
	cin >> b;
	cout << "Your input : " << b << endl;
	// false라 입력하면 true가 나온다(why? 문자열로 인식)
	// 0을 입력해야 false가 된다.
	// 결과는 컴파일러마다 다르고 같은 컴파일러도 버전마다 다를 수 있다.
	// 문자열보다는 명확히 숫자를 입력해야한다.

	return 0;
}