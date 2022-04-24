// ���� ���� ������(������ Ŭ����)
// Scoped Enumerations(Enum Class) Enum Struct�� �ֱ��ϴ�.
// C++ 11

#include <iostream>

/* 1. enum�� ������� ���� �ȵǴ� ��Ȳ�� ���ܹ���
int main()
{
	using namespace std;

	enum Color
	{
		RED,
		BLUE
	};

	enum Fruit
	{
		BANANA,
		APPLE
	};

	Color color = RED;
	Fruit fruit = BANANA;

	if(color==fruit)
		cout << "Color is fruit ? " << endl;

	return 0;

}//*/

//* 2. enum class�� �Ǽ��� ������
int main()
{
	using namespace std;

	enum class Color
	{
		RED,
		BLUE
	};

	enum class Fruit
	{
		BANANA,
		APPLE
	};

	Color color = Color::RED;
	Fruit fruit = Fruit::BANANA;

	if (static_cast<int>(color) == static_cast<int>(fruit)) // �񱳰� ���������� ����ڰ� ���ϴ� �κ��� �ƴϴ�.
	//if(color==fruit) // enum class�� �������� ���� enum class �ȿ� ���� �͵鸸 �� ����
		cout << "Color is fruit ? " << endl;

	return 0;
}//*/