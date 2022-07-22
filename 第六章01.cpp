#include <stdio.h>

int main(){
	int i,j,arr[20]={0},sum=0;
	for(i=0;i<20;i++){
		scanf("%d",&arr[i]);
		if(arr[i]>=0){
			sum+=arr[i];
		}
	}
//	for(j=0;j<20;j++){
//		if(arr[j]<0){
//			continue;
//		}
//		sum+=arr[j];
//	} 
	printf("result=%d\n",sum);
	return 0;
} 
