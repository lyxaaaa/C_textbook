//����һ�����������ֽ����������� 90=2*3*3*5
#include <stdio.h>

int main(){
	int n,i;
	printf("please input a number:");
	scanf("%d",&n);
	printf("%d=",n);
	for(i=0;i<=n;i++){
		while(n!=i){
			if(n%i==0){
			printf("%d *",i);
			n=n/i;
		}
		else break;
		}
		
	}
	printf("%d",n);
	return 0;
	
} 
