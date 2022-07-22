#include <stdio.h>

int main(){
	printf("please input three integers:\n");
	int a,b,c,t;
	scanf("%d %d %d",&a,&b,&c);
	t=c;
	c=b;
	b=a;
	a=t;
	printf("after: %d %d %d",a,b,c);
	return 0;
} 
