// ��ġ�� (Void, ���̵�)
// Void Type

// �Ű����� void �ִ� ���� ���� ���
void my_function(void)
{

}

int main()
{
	//void�� �޸𸮸� �������� �ʱ� ������ ������ �� ����.
	//void my_void;
	int i = 123;
	float f = 123.456f;

	void* my_void;

	// ������ Ÿ���� �ٸ��� ����� �޶� �ش� �������� �ּҸ� ǥ���ϴ� �������� ũ��� �����ϴ�.
	my_void = (void*)&i;
	my_void = (void*)&f;

	return 0;
}