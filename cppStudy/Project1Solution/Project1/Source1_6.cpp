// 모든 이름 짓기엔 완전한 규칙은 없다.
// 형식을 지키지 않는다해도
// 주변 사람들과 규칙을 맞추면 된다.

// 함수명은 일반적으로 동사명사로 구성한다.
void GetNumber()
{

}

// 이전에는 m_로 멤버 변수임을 알렸지만
// 요즘은 변수에 커서를 가져가면 보이므로
// 지키지 않는 경우도 있다.
class MyClass
{
public:
	int m_variable;
	int _variable;
	int variable_;
};

int main()
{
	// int 3three; 숫자로 시작하면 안된다.
	// 특정 문자 . ; 등으로 시작하면 안된다.
	// 대문자는 변수명에서 되도록 지양한다. 매크로에 많이 쓴다.
	int value;
	int num_apples; // 띄어쓰기 대신 under bar를 쓰는편
	int n_oranges; 
	int nApples; 
	int _apples;	// low 레벨의 코드를 작성하시는 분들
}