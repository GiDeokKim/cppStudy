// �Ҹ��� �ڷ����� ���ǹ� if
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

	// ! not operator �Ⱦ� �� �ִٸ� �Ⱦ��°� ����.

	// �� ������ &&(and) 
	cout << (true	&& true)	<< endl; // true
	cout << (true	&& false)	<< endl; // false
	cout << (false	&& true)	<< endl; // false
	cout << (false	&& false)	<< endl; // false

	// �� ������ ||(or) 
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

	// 0�� ������ ��� ���� true
	if (5)
		cout << "This is true" << endl;
	else
		cout << "This is false" << endl;

	bool b;
	cin >> b;
	cout << "Your input : " << b << endl;
	// false�� �Է��ϸ� true�� ���´�(why? ���ڿ��� �ν�)
	// 0�� �Է��ؾ� false�� �ȴ�.
	// ����� �����Ϸ����� �ٸ��� ���� �����Ϸ��� �������� �ٸ� �� �ִ�.
	// ���ڿ����ٴ� ��Ȯ�� ���ڸ� �Է��ؾ��Ѵ�.

	return 0;
}