//12-q3.c

#include<stdio.h>

int main(void) {
	short data[9] = { 4,6,9,8,7,2,5,1,3 };
	short max = 0, i;
	for (i = 0; i < 9; i++) {
		if (max < data[i]) max = data[i];
	}
	printf("data 배열 가장 큰 값은 %d",max);

	return 0;
}