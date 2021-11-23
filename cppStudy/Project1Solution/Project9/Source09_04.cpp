// 비교 연산자 오버로딩 하기
#include <iostream>
#include <vector>
#include <algorithm>
#include <random> // C++17에서 std::random_shuffle이 폐기(deprecated)되었음.

using namespace std;

class Cents
{
private:
	int m_cents;

public:
	Cents(int cents = 0) { m_cents = cents; }
	int getCents() const { return m_cents; }
	int& getCents() { return m_cents; }

	friend bool operator < (const Cents& c1, const Cents& c2) // 왼쪽이 작은 비교 연산자가 정의되어야 sort 함수를 사용할 수 있음
	{
		//return c1.m_cents > c2.m_cents; // 내림 차순
		return c1.m_cents < c2.m_cents; // 오름 차순
	}

	friend bool operator == (const Cents& c1, const Cents& c2)
	{
		return c1.m_cents == c2.m_cents;
	}

	friend bool operator != (const Cents& c1, const Cents& c2)
	{
		return c1.m_cents != c2.m_cents;
	}

	friend std::ostream& operator << (std::ostream& out, const Cents& cents)
	{
		out << cents.m_cents;

		return out;
	}
};

int main()
{
	Cents cents1(6);
	Cents cents2(6);

	if (cents1 == cents2)
		cout << "Equal" << endl;

	vector<Cents> arr(20);
	for (unsigned int i = 0; i < 20; i++)
		arr[i].getCents() = i;

	//std::random_shuffle(begin(arr), end(arr));
	std::random_device rd;
	std::mt19937 g(rd());
	std::shuffle(arr.begin(), arr.end(), g);

	for (auto& e : arr)
		cout << e << " ";
	cout << endl;

	std::sort(begin(arr), end(arr));

	for (auto& e : arr)
		cout << e << " ";
	cout << endl;

	return 0;
}
