// ��ü���� ���α׷��ְ� Ŭ����
// Object Oriented Programming and Class

#include <iostream>
#include <string>
#include <vector>
using namespace std;


// �����Ϳ� ����� �����ִ°��� ��ü�� �Ѵ�.
// Object
// Friend : name, address, age, height, weight, ...
//			print()
// object�� ���α׷������� ������ ���� class�̴�.


//struct Friend �����͸� ���� ��쿣 struct�� ���� ��ɵ� ���� ��� class�� ����.
//structure�� access specifier�� ���� �ʴ´�.
class Friend
{
public: // access specifier (public, private, protected)
	string	m_name;
	string	address_; // ���� ��Ÿ��
	int		_age; // �� ���� �ֽ� ��Ÿ��
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
	// ģ���� �� ���� ���...
	Friend jj{ "Jack Jack", "Uptown", 2, 30, 10 }; // instanciation(�޸𸮸� ������ ������), instance

	//print(jj.name, jj.address, jj.age, jj.height, jj.weight);
	print(jj);
	jj.print();

	// ģ���� ���� ���...
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