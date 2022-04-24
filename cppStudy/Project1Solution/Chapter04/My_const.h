#pragma once

namespace Constants
{
	// 메모리가 중복되게 사용됨
	//const double pi(3.141592);
	//const double gravity(9.8);

	// 메모리가 하나만 생성됨(h와 cpp 둘다 쓰고 extern 사용)
	extern const double pi;
	extern const double gravity;
}