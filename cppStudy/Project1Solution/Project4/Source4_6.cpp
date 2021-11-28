// ���ڿ� �Ұ�
#include <iostream>

/* 1. C ��Ÿ�� ���ڿ��� �迭�̸� �������� �� ����('\0')�� ����.
int main()
{
	using namespace std;

	// Ŀ���� ������ �ø��� 13 ���� �迭�̶�� ǥ�õ�.
	cout << "Hello, World" << endl;
	const char my_strs[] = "Hello, World";

	return 0;
}//*/

#include <string>

/* 2. string�� ���α׷����� ���Ǹ� ���� ������� ����� ���� �ڷ���
int main()
{
	using namespace std;

	const string my_hello = "Hello, World";
	//const string my_hello("Hello, World");
	//const string my_hello{ "Hello, World" };

	cout << my_hello << endl;

	return 0;
}//*/

/* 3. ������ string���� �Ͻ��� ����ȯ�� ������ �ʴ´�.
int main()
{
	using namespace std;

	// ""�� �����ϰ� ������ ������ ���.
	const string my_ID = "123";

	return 0;
}//*/

/* 4. string �Է��ϱ�.
int main()
{
	using namespace std;

	// Jack Jack �Է��ϸ� �� �Ѿ.(�߰��� ��ĭ �ִ� �̸�)
	cout << "Your name ? : ";
	string name;
	cin >> name; // ��ĭ�� ������ �̹� �ٹ��� ������ �Ǵ�.

	cout << "Your age ? : ";
	string age;
	cin >> age;

	cout << name << " " << age << endl;

	return 0;
}//*/

/* 4. getline���� �Է� �ޱ�.
int main()
{
	using namespace std;

	cout << "Your name ? : ";
	string name;
	getline(cin, name); // enterĥ������ �Է� ���� �� ����.

	cout << "Your age ? : ";
	string age;
	getline(cin, age);

	cout << name << " " << age << endl;

	return 0;
}//*/

#include <limits>

//* 5. ������ ���� ������ ����� ���۵�.
int main()
{
	using namespace std;

	cout << "Your age ? : ";
	int age;
	cin >> age;
	
	// �ذ��
	//cin.ignore(32767, '\n'); // 2 byte ���� ū signed ���� 32767
	//cin.ignore(numeric_limits<streamsize>::max(), '\n');

	cout << "Your name ? : ";
	string name;
	getline(cin, name); // enterĥ������ �Է� ���� �� ����.

	cout << name << " " << age << endl;

	return 0;
}//*/

/* 6. ���ڿ� ���ϱ�� ���ڿ� ���� ����ϱ�.
int main()
{
	using namespace std;

	string a("Hello, ");
	string b("World");

	// ���ϱ� �����ڰ� string ���� �����ε��Ǿ� ����.
	string hw = a + b; // append

	// 12 ����(C ��Ÿ�ϰ� ���̰� 1 ���̳�.)
	cout << hw.length() << endl;

	hw += " I'm good";
	cout << hw << endl;


	return 0;
}//*/