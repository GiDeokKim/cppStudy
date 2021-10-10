// 무치형 (Void, 보이드)
// Void Type

// 매개변수 void 넣는 것은 옛날 방식
void my_function(void)
{

}

int main()
{
	//void는 메모리를 차지하지 않기 떄문에 선언할 수 없다.
	//void my_void;
	int i = 123;
	float f = 123.456f;

	void* my_void;

	// 데이터 타입이 다르고 사이즈가 달라도 해당 데이터의 주소를 표현하는 데이터의 크기는 동일하다.
	my_void = (void*)&i;
	my_void = (void*)&f;

	return 0;
}