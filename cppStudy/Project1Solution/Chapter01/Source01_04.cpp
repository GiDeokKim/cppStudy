// cin console in
// cout console out
// endl end line
#include <iostream> //input output stream
#include <cstdio>

int main()
{
	using namespace std; //�� ��ɹ��� �Էµ� �ڵ� ���������� ���� std::�� �����ص� �ȴ�.
	// �����Ϸ��� cout�̳� endl�� ������ ��, std��� namespace �ȿ��� �����Ϸ��� ���� ã�Ƽ� 
	// �������� ���ش�.

	int x = 1024;
	double pi = 3.141592;

	// namespace �̸�����/��Ī���� cout�� std��� namespace �ȿ� ���ǵǾ� �ִ�.
	std::cout << "I love this lecture!\n"; // << std::endl;
	// <<��� ��Ʈ���� Ÿ�� cout���� ����.
	std::cout << "x is " << x << " pi is " << pi << std::endl;
	// pi�� �Ϻΰ� �߸���. ��� ���е� ������ �ʿ��ϴ�!

	std::cout << "abc" << "\t" << "def" << std::endl;
	std::cout << "ab" << "\t" << "cdef" << std::endl;
	// \t�� ���� �ǹ��Ѵ�. \t�� ������� �ָ鼭 �ٸ������ �ϰ� ���� �� ����ϸ� ����.
	// \t�� �ϳ��� ������� �۵��ϸ� �� ���ڰ� �ƴϴ�.

	cout << "\a"; // audio�� ����. �Ҹ��� ������ش�.
	//printf("I love this lecture!\n");

	int z = 1;

	cout << "Before your input, z was " << z << endl;

	//x�� input�� �귯���� ����
	cin >> z; //100000000000000000000000�� ���� ū ���� �ִ� ��츦 �����ϸ� �Է� ��ȿ�� ������ �ʿ�
	
	cout << "Your input is " << z << endl;

	return 0;
}