#include <stdio.h>
int main(){
	int score[5];

	printf("5명 학생의 점수 입력 : ");
	
	for (int i = 0; i < 5; i++) {
		scanf_s("%d", &score[i]);
	}
	for (int j = 0; j < 5; j++) {
		printf("%d번째 학생의 점수는 %d점\n", j + 1, score[j]);
	}
}
