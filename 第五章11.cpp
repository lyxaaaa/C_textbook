//一元五角 兑换 5分2分1分 一共 100枚
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
