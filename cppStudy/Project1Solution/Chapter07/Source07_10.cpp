// 스택과 힙
// the stack and the heap

// segment로 구분됨
// 1. code : 우리가 작성한 프로그램이 위치
// 2. Data(initialized) : 초기화된 전역 변수 및 정적 변수
// 3. Data(uninitialized) : 초기화되지 않은 전역 변수 및 정적 변수
// 4. Stack : 빠르게 접근 가능하지만 적은 메모리를 가짐
// 5. Heap : size가 크지만 특정 데이터가 어디에 저장될지 모름, 동적 메모리 할당