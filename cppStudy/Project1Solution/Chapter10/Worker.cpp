#pragma once
#include "Worker.h"

// 의존 관계라서 헤더가 아닌 cpp에 있어도 된다.
#include "Timer.h"

void Worker::doSomething()
{
	Timer timer;	//start timer

	// do some work here

	timer.elapsed(); // end timer and report elapsed time
}
