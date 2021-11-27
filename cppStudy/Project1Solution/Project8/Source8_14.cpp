// Ŭ���� �ȿ� ���Ե� �ڷ��� Nested types
#include <iostream>

class Fruit
{
public:
	enum FruitType // enum class�ε� ��� ����
	{
		APPLE, BANANA, CHERRY
	};
private:
	FruitType m_type;

public:
	Fruit(FruitType type) : m_type(type)
	{}

	FruitType getType() { return m_type; }
};

int main()
{
	Fruit apple(Fruit::APPLE);

	if (apple.getType == Fruit::APPLE)
	{
		std::cout << "Apple" << std::endl;
	}
}