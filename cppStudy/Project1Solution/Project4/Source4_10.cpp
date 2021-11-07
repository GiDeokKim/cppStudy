// ����ü struct
// �پ��� �ڷ����� ��� �ϳ��� �ڷ���ó�� ����ϱ�

#include <iostream>
#include <string>

using namespace std;

struct Person // ����� ���� �ڷ���
{
	double	height = 123.0; //����Ʈ��
	float	weight;
	int		age;
	string	name;

	// ����ü �ȿ� �Լ��� ���� �� �ִ�.
	void print()
	{
		cout << height << " " << weight << " " << age << " " << name;
		cout << endl;
	}
};

// ����ü �ȿ� ����ü�� ���� �� �ִ�.
struct Family
{
	Person me, mom, dad;
};

// ��ȯ �ڷ������� ����ü�� �� �� �ִ�.
Person getMe()
{
	Person me{ 2.0,100.0, 20, "Jack" };

	return me;
}

//void printPerson(double height, float weight, int age, string name)
void printPerson(Person ps)
{
	cout << ps.height << " " << ps.weight << " " << ps.age << " " << ps.name;
	cout << endl;
}

struct Employee		// 14 bytes 
{
	short	id;		// 2 bytes
	int		age;	// 4 bytes
	double	wage;	// 8 bytes
};

int main()
{
	// �������� �ٷ�ų� �Ű������� �ϳ��ϳ� �ִ� �� ������ ���������.
	double	height;
	float	weight;
	int		age;
	string	name;

	Person me{ 2.0,100.0, 20, "Jack" }; // ����Ʈ���� �����
	printPerson(me);
	me.print();
	Person me2(me); //me2=meó�� ���� �����ڸ� ���� ����� �������� ����
	me2.print();
	/*me.age = 20;
	me.name = "Jack";
	me.height = 2.0;
	me.weight = 100.0;*/
	Person mom;
	Person dad;


	Employee emp1;

	// 16�� ���. 2 + (2)�е� + 4 + 8
	// data structure alignment �����ϱ�
	cout << sizeof(Employee) << endl;

	return 0;
}