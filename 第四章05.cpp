//һԪ���η���ax^2+bx+c=0  ��д��������abcֵ�����x
#include <stdio.h>
#include <math.h>
int main(){
	float a,b,c,dlt,x1,x2;
	scanf("%f %f %f",&a,&b,&c);
	dlt=b*b-4*a*c;
	if(dlt<0){
		printf("�÷����޽�\n");
	}else if(dlt==0){
		x1=(-b)/(2*a);
		printf("�÷������ҽ���һ���� x=%.2f\n",x1);
	}else{
		dlt=sqrt(dlt);
		x1=(-b+dlt)/(2*a);
		x2=(-b-dlt)/(2*a);
		printf("�÷����������� x1=%.2f x2=%.2f",x1,x2);
	}
	return 0;
} 
