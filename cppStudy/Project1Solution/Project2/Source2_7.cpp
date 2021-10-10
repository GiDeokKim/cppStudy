// ������ char type
// ���ڴ� ASCII CODE�� �������Ѽ� �ٷ��.

#include <iostream>
#include <limits>

int main()
{
	using namespace std;

	char c1(65);
	char c2 = 'A'; // �ѱ��ڸ� ǥ���� ���� Ȭ����ǥ�� ����Ѵ�.

	cout << c1 << " " << c2 << " " << int(c1) << " " << int(c2) << endl;

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

	cin >> c1;
	cout << c1 << " " << static_cast<int>(c1) << endl;

	//stream�� ����ϸ� input���� ���ۿ� �����ϰ� ����
	cin >> c1;
	cout << c1 << " " << static_cast<int>(c1) << endl;
	// �α����Է��ϸ� ���ۿ� ���� ���� �޾ƿ�

	cin >> c1;
	cout << c1 << " " << static_cast<int>(c1) << endl;

	cout << sizeof(char) << endl;
	cout << (int)numeric_limits<char>::max() << endl;
	cout << (int)numeric_limits<char>::lowest() << endl;

	cout << "This is first line \nsecond line\n"; // ���ۿ� ���⸸�ϰ� �ٹٲ��� ���� ���� ����
	cout << "This is first line " << endl << "second line" << endl; // endl�� ���ۿ� �ִ� ���� ����� �ڿ� �ٹٲ��� ������
	//std::flush
	cout << int('\n') << endl;

	return 0;
}