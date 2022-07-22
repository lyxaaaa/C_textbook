//键盘输入半径r 计算并输出圆的周长面积
#include <stdio.h>
#define PI 3.14

int main(){
	float r,c,s;//注意不是int 因为半径可以是小数 
	scanf("%f",&r);
	c=2*PI*r;
	s=PI*r*r;
	printf("c=%f s=%f",c,s);
	return 0;
}
 
