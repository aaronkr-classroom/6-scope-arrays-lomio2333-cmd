//12-q2.c


#include<stdio.h>

int main(void) {
	short data[9] = { 4, 6, 9, 8, 7, 2, 5, 1, 3 };
	short result = 0, i;
	for (i = 0; i < 9; i += 2) {
		result = result + data[i];
	}
	printf("data 배열 짝수 합은 %d이다",result);

	return 0;
}