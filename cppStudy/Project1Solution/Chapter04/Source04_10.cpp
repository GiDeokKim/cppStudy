// 구조체 struct
// 다양한 자료형을 묶어서 하나의 자료형처럼 사용하기

#include <iostream>
#include <string>

using namespace std;

struct Person // 사용자 정의 자료형
{
	double	height = 123.0; //디폴트값
	float	weight;
	int		age;
	string	name;

	// 구조체 안에 함수를 넣을 수 있다.
	void print()
	{
		cout << height << " " << weight << " " << age << " " << name;
		cout << endl;
	}
};

// 구조체 안에 구조체를 넣을 수 있다.
struct Family
{
	Person me, mom, dad;
};

// 반환 자료형에도 구조체를 쓸 수 있다.
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
	// 여러명을 다루거나 매개변수에 하나하나 넣는 것 때문에 힘들어진다.
	double	height;
	float	weight;
	int		age;
	string	name;

	Person me{ 2.0,100.0, 20, "Jack" }; // 디폴트값을 덮어쓴다
	printPerson(me);
	me.print();
	Person me2(me); //me2=me처럼 대입 연산자를 쓰는 방식은 권장하지 않음
	me2.print();
	/*me.age = 20;
	me.name = "Jack";
	me.height = 2.0;
	me.weight = 100.0;*/
	Person mom;
	Person dad;


	Employee emp1;

	// 16이 뜬다. 2 + (2)패딩 + 4 + 8
	// data structure alignment 공부하기
	cout << sizeof(Employee) << endl;

	return 0;
}