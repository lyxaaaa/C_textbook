//����������������ʵ��a bֵ�Ľ��� 
#include <stdio.h>

int main(){
	int a,b;
	scanf("%d %d",&a,&b);
	printf("before wrap:a=%d b=%d\n",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("after wrap:a=%d b=%d\n",a,b);
	return 0; 
} 
