//객체들의 관계(Object Relationship)
// 10.1강은 10강 끝나고 다시 보기

#include "Monster.h"

int main()
{
	Monster mon1("Sanson", Position2D(0, 0));
	std::cout << mon1 << std::endl;

	//while (1) // game loop
	{
		// event
		mon1.moveTo(Position2D(1, 1));
		std::cout << mon1 << std::endl;
	}

	return 0;
}