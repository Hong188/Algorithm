/* 문제 요구사항
: 첫째 줄에 N, X 입력_N는 수열을 구성하는 정수의 개수
  둘째 줄에 수열 A를 구성하는 정수를 N개를 한 칸 간격으로 입력, X보다 작은 수를 입력받은 순서대로 출력해야 함 
*/

//해설
#include <stdio.h>
int main() {
	int N, X;
	scanf_s("%d %d", &N, &X);

	for (int i = 0; i < N; i++) {  // int는 0으로 초기화; 조건식_i를 N-1까지 연산; i를 1씩 더하는 연산 실행
		int num;                   // num이라는 이름의 변수 선언//메모리 공간  & int는 정수 저장이 가능한 메모리 공간을 할당한다.
		scanf_s("%d", &num);

		if (num < X)        //  X미만의 num은
			printf("%d ", num); // (한 칸씩 공백을 두고) 출력한다
	}
}
