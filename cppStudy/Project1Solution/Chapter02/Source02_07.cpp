// ������ char type
// ���ڴ� ASCII CODE�� �������Ѽ� �ٷ��.

#include <iostream>
#include <limits>

int main()
{
	using namespace std;

	// �ѱ��ڸ� ǥ���� ���� Ȭ����ǥ�� ����Ѵ�.
	char c1(65);
	char c2 = 'A'; 

	cout << c1 << " " << c2 << " " << int(c1) << " " << int(c2) << endl;


	// char �ڷ��� �Ѱ�ġ Ȯ��
	cout << sizeof(char) << endl;
	cout << (int)numeric_limits<char>::max() << endl;
	cout << (int)numeric_limits<char>::lowest() << endl;


	// stream�� ����ϸ� ��ģ input ���� ���ۿ� �����ϰ� �ִ´�.
	// �� �ڿ� �ٽ� �Է� �޴� ����� �ִٸ� ��ģ input ���� �ִ´�.
	cin >> c1;
	cout << c1 << " " << static_cast<int>(c1) << endl;

	cin >> c1;
	cout << c1 << " " << static_cast<int>(c1) << endl;

	cin >> c1;
	cout << c1 << " " << static_cast<int>(c1) << endl;


	cout << "This is first line \nsecond line\n"; // ���ۿ� ���⸸�ϰ� �ٹٲ��� ���� ���� ����
	cout << "This is first line " << endl << "second line" << endl; // endl�� ���ۿ� �ִ� ���� ����� �ڿ� �ٹٲ��� ������
	//std::flush
	cout << int('\n') << endl;


	// c-style casting(���� ��ȯ)
	cout << (char)65 << endl;
	cout << (int)'A' << endl;

	//cpp-style casting(���� ��ȯ)
	cout << char(65) << endl;
	cout << int('A') << endl;

	// ���� ����(�⺻���� ���� ��ȯ�� �����Ϸ����� �̸� �˸�)
	cout << static_cast<char>(65) << endl;
	cout << static_cast<int>('A') << endl;

	// ���� 3���� ���� ����� ���δ�.


	//static_cast�� ����Ѵٰ��ؼ� ������ �ִ� ���� ���ϴ� ���� �ƴ�
	char ch(97);
	cout << ch << endl;
	cout << static_cast<int>(ch) << endl;
	cout << ch << endl;


	return 0;
}