// 객체지향 프로그래밍과 클래스
// Object Oriented Programming and Class

#include <iostream>
#include <string>
#include <vector>
using namespace std;


// 데이터와 기능이 묶여있는것을 객체라 한다.
// Object
// Friend : name, address, age, height, weight, ...
//			print()
// object를 프로그래밍으로 구현한 것이 class이다.


//struct Friend 데이터만 넣을 경우엔 struct만 쓰고 기능도 넣을 경우 class로 쓴다.
//structure는 access specifier를 쓰지 않는다.
class Friend
{
public: // access specifier (public, private, protected)
	string	m_name;
	string	address_; // 구글 스타일
	int		_age; // 더 편한 최신 스타일
	double	height;
	double	weight;

	void print()
	{
		cout << m_name << " " << address_ << " " << _age << " " << height << " " << weight << endl;
	}
};

void print(const string& name, const string& address, const int& age,
	const double& height, const double& weight)
{
	cout << name << " " << address << " " << age << " " << height << " " << weight << endl;
}

void print(const Friend& fr)
{
	cout << fr.m_name << " " << fr.address_ << " " << fr._age << " " << fr.height << " " << fr.weight << endl;
}

int main()
{
	// 친구가 한 명인 경우...
	Friend jj{ "Jack Jack", "Uptown", 2, 30, 10 }; // instanciation(메모리를 가지기 시작함), instance

	//print(jj.name, jj.address, jj.age, jj.height, jj.weight);
	print(jj);
	jj.print();

	// 친구가 많은 경우...
	/*vector<string> name_vec;
	vector<string> address_vec;
	vector<int> age_vec;
	vector<double> height_vec;
	vector<double> weight_vec;

	print(name_vec[0], address_vec[0], age_vec[0], height_vec[0], weight_vec[0]);*/

	vector<Friend> my_friends;
	my_friends.resize(2);

	for (auto& ele : my_friends)
		ele.print();

	int arrayTest[10] = { 1,2,3,4,5,6,7,8,9,10 };

	for (int i = 0; i < 10; i++)
	{
		cout << arrayTest[i] << endl;
	}

	for (auto element : arrayTest)
	{
		cout << element << endl;
	}

	for (auto& element : arrayTest)
	{
		cout << element << endl;
	}

	return 0;
}