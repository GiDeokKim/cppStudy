// �ڷ������� ���� �ٿ��ֱ�
// Type aliases

#include <iostream>
#include <vector>
//#include <cstdint>

int main()
{
	// �Ÿ��� double�� �ƴ� float�� ����ؾ��� ���
	// ���⸸ �ٲٸ� �Ǵ� ���������� ����.
	typedef double distance_t;

	// �����ʺ������� typedef�� �����Ǿ� �ִ�.
	std::int8_t i(97);

	// ������ ���忡���� ����.
	double		my_distance;
	distance_t	home2work;
	distance_t	home2school;

	//std::vector<std::pair<std::string, int>> pairlist;
	using namespace std;
	//vector<pair<string, int>> pairlist; // using namespace�� ���̱�
	
	// typedef�� using�� �������� template �����̴�.
	//typedef vector<pair<string, int>> pairlist_t;
	//pairlist_t pairlist;

	using pairlist_t = vector<pair<string, int>>;
	pairlist_t pairlist;

	return 0;
}