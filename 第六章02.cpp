#include <stdio.h>

int main(){
	int temp,n,i,j,num[10],odd=0,even=9;
	for(i=0;i<10;i++){
		scanf("%d",&n);
		if(n%2!=0){//  odd
			num[odd++]=n;
		}else{
			num[even--]=n;
		}
	}
	// sort odd part
	for(i=0;i<odd-1;i++){
		if(num[i]>num[i+1]){
			temp=num[i+1];
			num[i+1]=num[i];
			num[i]=temp;
		}
	}
	//for even part
	for(j=9;j>even;j--){
		if(num[j]<num[j-1]){
			temp=num[j];
			num[j]=num[j-1];
			num[j-1]=temp;
		}
	}
	
	// display
	for(j=0;j<10;j++){
		printf("%d\t",num[j]);
	}
	
	return 0;
}
