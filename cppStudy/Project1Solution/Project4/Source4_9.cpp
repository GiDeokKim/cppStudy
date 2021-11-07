// 자료형에게 가명 붙여주기
// Type aliases

#include <iostream>
#include <vector>
//#include <cstdint>

int main()
{
	// 거리를 double이 아닌 float로 사용해야할 경우
	// 여기만 바꾸면 되니 유지보수에 좋다.
	typedef double distance_t;

	// 고정너비정수도 typedef로 구현되어 있다.
	std::int8_t i(97);

	// 컴파일 입장에서는 같다.
	double		my_distance;
	distance_t	home2work;
	distance_t	home2school;

	//std::vector<std::pair<std::string, int>> pairlist;
	using namespace std;
	//vector<pair<string, int>> pairlist; // using namespace로 줄이기
	
	// typedef와 using의 차이점은 template 지원이다.
	//typedef vector<pair<string, int>> pairlist_t;
	//pairlist_t pairlist;

	using pairlist_t = vector<pair<string, int>>;
	pairlist_t pairlist;

	return 0;
}