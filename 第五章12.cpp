//问做好事者是谁，三人说真话，一人假话。采用枚举法，一个一个去试，说真话sum加1，假话不加。当sum=3时符合条件输出这个人
#include <stdio.h>

int main(){
	int i,sum=0,flag=0;
	char thisman = ' ';
	//枚举
	for(i=0;i<4;i++){
		thisman='A'+i;
		sum=(thisman!='A')+(thisman=='C')+(thisman=='D')+(thisman!='D');
		if(sum==3){
		printf("thisman is %c\n",thisman);
		flag=1;//标记找到了这个人 
	}
 } 
	
	if(flag!=1){
		printf("sorry can not find thisman\n");
	}
	return 0;
} 
