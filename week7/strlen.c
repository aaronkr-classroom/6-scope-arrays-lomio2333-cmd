//strlen.c->
//c언어에서 strlen()함수 이미 있어가 
//우리는 다른 함수 이름 사용
#include<stdio.h>
#include<string.h>//strlen(),strcpy(),strcat()

int string_length(char data[]) {
	int count = 0;
	while (data[count])count++;
	return count;
}


int main(void) {
	int data_length, str_length;
	char data[10] = { 'h','a','p','p','y',0 };
	data_length = string_length(data);//우리가 작성한 것
	str_length = strlen(data);//c언어의 string.h에 있는 함수

	printf("data length=%d\n",data_length);
	printf("str length=%d\n",str_length);

	char data2[10] = { 'a','b','c',0, };
	char result[100];

	printf("Result(0):%s",result);
	strcpy_s(result, strlen(result)+1,data2);//result="abc";
	printf("Result(cpy):%s", result);
	strcat_s(result, strlen(result)+1, "def");//result="abcdef";
	printf("Result(cat):%s", result);

	return 0;
}