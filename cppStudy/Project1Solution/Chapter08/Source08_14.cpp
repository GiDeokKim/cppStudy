// 클래스 안에 포함된 자료형 Nested types
#include <iostream>

class Fruit
{
public:
	enum FruitType // enum class로도 사용 가능
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

	if (apple.getType() == Fruit::APPLE)
	{
		std::cout << "Apple" << std::endl;
	}
}