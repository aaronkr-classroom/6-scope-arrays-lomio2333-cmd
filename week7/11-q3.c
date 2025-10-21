//11-q2.c(슬라이드 28q2)
//11-q3.c(슬라이드 28q2)
#include<stdio.h>

void Test()
{
	static int result = 0;//지역변수(충돌?)
	printf("%d,",result++);

}

int main(void) {
	for (int i = 0; i < 5; i++)Test();//0,1,2,3,4
	return 0;
}