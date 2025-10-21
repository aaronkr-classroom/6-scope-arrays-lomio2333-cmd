//comp.c
//1의 보수,2의 보수
#include<stdio.h>

//2진법 표현 출력
void printBinary(unsigned char num) {
	for (int i = 7; i >= 0; i--) {
		printf("%d", (num >> i) & 1);
	}
}

//1의 보수 
unsigned char onesComp(unsigned char num) {
	return ~num;//모든 비트 변경하기 0110=>1001
}

//2의 보수
unsigned char twosComp(unsigned char num) {
	return~num-1;//모든 비트 변경하기 0110=>1000
}



int main(void) {
	unsigned char num;
	printf("Enter a number(0-255):");
	scanf_s("%hhu", &num);//unsigned char inp

	printf("\nOriginal:%3d=",num);
	printBinary(num);

	unsigned char ones = onesComp(num);
	printf("\n1의 보수:%3d=",num);
	printBinary(num);

	unsigned char twos = twosComp(num);
	printf("\n2의 보수:%3d=", num);
	printBinary(num);

	return 0;
}