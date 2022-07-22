#include <stdio.h>

int main(){
	int i,result=0;
	for(i=2;i<=100;i+=2){
		result+=i;
	}
	printf("result=%d\n",result);
	return 0;
} 
