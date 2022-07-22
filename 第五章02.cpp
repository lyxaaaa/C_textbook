#include <stdio.h>

int main(){
	int i;
	int result=0;
	for(i=1;i<=99;i+=2){
		result+=i*(i+1)*(i+2);
	}
	printf("1*2*3+3*4*5+......+99*100*101=%d\n",result);
	return 0;
} 
