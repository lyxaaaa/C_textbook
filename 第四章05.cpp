//一元二次方程ax^2+bx+c=0  编写程序输入abc值后输出x
#include <stdio.h>
#include <math.h>
int main(){
	float a,b,c,dlt,x1,x2;
	scanf("%f %f %f",&a,&b,&c);
	dlt=b*b-4*a*c;
	if(dlt<0){
		printf("该方程无解\n");
	}else if(dlt==0){
		x1=(-b)/(2*a);
		printf("该方程有且仅有一个解 x=%.2f\n",x1);
	}else{
		dlt=sqrt(dlt);
		x1=(-b+dlt)/(2*a);
		x2=(-b-dlt)/(2*a);
		printf("该方程有两个解 x1=%.2f x2=%.2f",x1,x2);
	}
	return 0;
} 
