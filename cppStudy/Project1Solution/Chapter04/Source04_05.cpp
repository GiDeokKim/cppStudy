#include <iostream>
#include <typeinfo>

/* 1. typeinfo ���̺귯�� �Ұ�
int main()
{
	using namespace std;

	// typeid().name()�� ������ ���ͷ��� � Ÿ������ �˷��ִ� �Լ��̴�.
	cout << typeid(0.0).name() << endl;
	cout << typeid(0).name() << endl;

	bool variable = true;
	cout << typeid(variable).name() << endl;

	return 0;
}//*/

/* 2. �Ͻ��� ����ȯ(Implicit Type Conversion(coersion)) �����Ϸ��� �˾Ƽ� ������ ����ȯ
int main()
{
	using namespace std;

	int a = 123.0; // warning C4244: 'initializing': conversion from 'double' to 'int', possible loss of data

	cout << typeid(a).name() << endl;

	return 0;
}//*/

/* 3. �Ͻ��� ����ȯ numeric promotion
int main()
{
	using namespace std;

	float	f = 1.0f;
	double	d = f; // numeric promotion(���� �޸� �����Ͱ� ū �޸𸮿� ���� ���)

	cout << typeid(f).name() << endl;
	cout << typeid(d).name() << endl;

	return 0;
}//*/

/* 4. �Ͻ��� ����ȯ numeric conversion
#include <iomanip>
int main()
{
	using namespace std;

	float	d = 3; // numeric conversion(���� �ٸ� �ڷ��� ���� ��ȯ)
	short	s = 2; // numeric conversion(ū �޸� �����Ͱ� ���� �޸𸮿� ���� ���)

	cout << typeid(d).name() << endl;
	cout << typeid(s).name() << endl;

	int		i = 30000; // short ������ �Ѿ�� �������� �ȳѾ�� ������.
	char	c = i;

	cout << static_cast<int>(c) << endl; // 48

	double	dd = 0.123456789;
	float	ff = dd;

	cout << setprecision(12) << dd << endl;
	cout << setprecision(12) << ff << endl;

	return 0;
}//*/

/* 5. ����� ����ȯ(Explicit Type Conversion(casting)) ���α׷��Ӱ� ��ȯ�ϰڴٴ� �ǻ�ǥ��
int main()
{
	using namespace std;

	int i = int(4.0);			// c++ style
	i = (int)4.0;				// c style
	i = static_cast<int>(4.0);	// �ֽ�

	return 0;
}//*/