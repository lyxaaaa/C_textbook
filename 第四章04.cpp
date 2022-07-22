//从键盘输入一个负十六进制整数，输出方式同上
#include <stdio.h>

int main(){
	short int a;
	scanf("%x",&a);
	printf("补码：%hx\n",a); 
	printf("该负数：-%hx\n",-a); 
	return 0;
} 
