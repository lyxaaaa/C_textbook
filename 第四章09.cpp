#include <stdio.h>

int main(){
	int m,n,a,b,c;
	//三位整数逆序 
	scanf("%d",&m);
	a = m/100;
	b = (m-100*a)/10;
	c = m%10;
	n = 100*c + 10*b + a;
	printf("later:%d\n",n);
	return 0;
}
