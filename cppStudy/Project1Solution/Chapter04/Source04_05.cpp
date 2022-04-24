#include <iostream>
#include <typeinfo>

/* 1. typeinfo 라이브러리 소개
int main()
{
	using namespace std;

	// typeid().name()는 변수나 리터럴이 어떤 타입인지 알려주는 함수이다.
	cout << typeid(0.0).name() << endl;
	cout << typeid(0).name() << endl;

	bool variable = true;
	cout << typeid(variable).name() << endl;

	return 0;
}//*/

/* 2. 암시적 형변환(Implicit Type Conversion(coersion)) 컴파일러가 알아서 강제로 형변환
int main()
{
	using namespace std;

	int a = 123.0; // warning C4244: 'initializing': conversion from 'double' to 'int', possible loss of data

	cout << typeid(a).name() << endl;

	return 0;
}//*/

/* 3. 암시적 형변환 numeric promotion
int main()
{
	using namespace std;

	float	f = 1.0f;
	double	d = f; // numeric promotion(작은 메모리 데이터가 큰 메모리에 담기는 경우)

	cout << typeid(f).name() << endl;
	cout << typeid(d).name() << endl;

	return 0;
}//*/

/* 4. 암시적 형변환 numeric conversion
#include <iomanip>
int main()
{
	using namespace std;

	float	d = 3; // numeric conversion(서로 다른 자료형 간에 변환)
	short	s = 2; // numeric conversion(큰 메모리 데이터가 작은 메모리에 담기는 경우)

	cout << typeid(d).name() << endl;
	cout << typeid(s).name() << endl;

	int		i = 30000; // short 범위를 넘어가면 문제지만 안넘어가면 괜찮다.
	char	c = i;

	cout << static_cast<int>(c) << endl; // 48

	double	dd = 0.123456789;
	float	ff = dd;

	cout << setprecision(12) << dd << endl;
	cout << setprecision(12) << ff << endl;

	return 0;
}//*/

/* 5. 명시적 형변환(Explicit Type Conversion(casting)) 프로그래머가 변환하겠다는 의사표현
int main()
{
	using namespace std;

	int i = int(4.0);			// c++ style
	i = (int)4.0;				// c style
	i = static_cast<int>(4.0);	// 최신

	return 0;
}//*/