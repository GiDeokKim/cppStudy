// ���ڿ� �Ұ�
#include <iostream>
#include <string>
#include <limits>

using namespace std;

int main()
{
	const char my_strs[] = "Hello, World";

	// ���α׷����� ���Ǹ� ���� �������, ����� ���� �ڷ���
	const string my_hello = "Hello, World";
	const string my_ID = "123";

	// Ŀ���� ������ �ø��� 13 ������ �迭�̴�.
	cout << "Hello, World" << endl;

	cout << my_hello << endl;

	// 1 Ÿ�����ߴ��� �ٷ� �̸����� �Ѿ��
	cout << "Your age ? : ";
	int age;
	cin >> age;
	
	std::cin.ignore(/*32767*/std::numeric_limits<std::streamsize>::max(), '\n'); // 2 byte ���� ū signed ���� 32767

	cout << "Your name ? : ";
	string name;
	//cin >> name;
	std::getline(std::cin, name); // ���ͱ��� �޾Ƽ� �ѹ��� �־��ֱ�

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