//gl_game
#include<stdio.h>
#include<stdlib.h>//rand(),srand()
#include<time.h>//time()

int rand_num;//전역 변수

void gameInit(void) {
	srand(time(0));//1970년 1월 1일 0:00시부터 현재까지 ms 값
	rand_num = rand() % 10 + 1;// (0 - 9) + 1 = [1, 10]

}	

void gamePlay(void) {
	//지역변수
	int guess = 0, count = 0, allowed = 5;//5개 추측만 가능

	printf("Guess the number(1-10:");

	do {
		scanf_s("%d", &guess);
		count++;

		if (guess == rand_num) {
			printf("정답");
			break;
		}
		else if (guess < rand_num) {
			printf("too low");
		}
		else if (guess > rand_num) {
			printf("too high");
		}
	} while (count != allowed);


	if (count > allowed) {
		printf("too many guess");
	}
}

int main(void) {
	gameInit();
	gamePlay();


	return 0;
}