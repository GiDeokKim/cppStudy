// ���� ���� ������(������ Ŭ����)
// Scoped Enumerations(Enum Class) Enum Struct�� �ֱ��ϴ�.

#include <iostream>

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

	if (static_cast<int>(color) == static_cast<int>(fruit))
	//if(color==fruit) // enum class�� ��������
		cout << "Real?" << endl;

	return 0;
}