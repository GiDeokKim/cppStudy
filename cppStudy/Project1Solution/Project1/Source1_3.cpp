#include <iostream>

//int main()
//{
//	int x = 123;
//
//	// y��� ������ 123�� �������ش�.
//	// y��� ���� �̸��� ����Ű�� �ִ� �޸� ������ 123�̶�� ������ �����صд�.
//	int y;
//	y = 123; // assignment operator ���� ������
//	
//	std::cout << y << std::endl;
//	std::cout << &y << std::endl; // y�� �޸� �ּҰ� ��µȴ�.
//	// & ampersand
//
//	// l-value r-value
//	// l-value�� �޸� �ּҸ� ������ �ִ�.
//	// r-value�� �ӽ������� ������ �� �������.
//	// x = x + 2;��� ������ �������� x�� �ӽ������� �ٸ� �޸� ������ ������ �� 
//	// 2�� ���ϰ� ������ �Ǳ� ������ l-value�� �ƴ� r-value�̴�.
//
//
//
//	return 0;
//}

int main()
{
	int x; // error C4700: uninitialized local variable 'x' used
	// debug ��忡���� ����� runtime error�� ���.
	// release ��忡���� ����� �ڵ����� �ʱ�ȭ�����ִµ� �⺻���� ���� �־��ش�.
	// ������ �׻� �ʱ�ȭ�� ������!!
	// ���� ���α׷��� �ش� �޸� �ּҸ� ����ϴٰ� ������ ���� �־�ΰ� �������� ������
	// �׻� �ʱ�ȭ�� �ٷ� ��ƾ��Ѵ�/.
	int y = 123; // initialization
	//int y(123); ȿ������ ���̴� ����.
	y = 5; // assignment


	std::cout << x << std::endl;

	return 0;
}