#include <stdio.h>
int getSum(int n);

int main(){
	long term=1,sum=0;
	int i;
	for(i=1;i<=10;i++){
		term*=i;
		sum+=term;
	}
	printf("result=%d\n",sum);
} 

//��дһ������n�׳˵ĺ���	(��չ)
int getSum(int n){
	int i,sum=1;
	for(i=1;i<=n;i++){
		sum*=i;
	}
	return sum;
} 
