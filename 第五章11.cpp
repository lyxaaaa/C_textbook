//һԪ��� �һ� 5��2��1�� һ�� 100ö
#include <stdio.h> 
int main(){
	int x,y,z,count=0;
	for(x=1;x<=28;x++){
		for(y=1;y<=73;y++){
			z=150-5*x-2*y;
			if(x+y+z==100){
				printf("x=%d y=%d z=%d\n",x,y,z);
				count++;
			}
		}
	}
	printf("count=%d\n",count);
	return 0;
}
