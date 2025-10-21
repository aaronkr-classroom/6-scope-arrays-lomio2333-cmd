//11-q2.c(슬라이드 28q2)
//11-q3.c(슬라이드 28q2)
#include<stdio.h>
int result;//전역변수
void Test()
{
	int result = 5;//지역변수(충돌?)
	result++;

}

int main(void) {
	Test();
	printf("result:%d",result);//0,null(전역변수사용)
	return 0;
}