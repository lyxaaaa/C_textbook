//������������˭������˵�滰��һ�˼ٻ�������ö�ٷ���һ��һ��ȥ�ԣ�˵�滰sum��1���ٻ����ӡ���sum=3ʱ����������������
#include <stdio.h>

int main(){
	int i,sum=0,flag=0;
	char thisman = ' ';
	//ö��
	for(i=0;i<4;i++){
		thisman='A'+i;
		sum=(thisman!='A')+(thisman=='C')+(thisman=='D')+(thisman!='D');
		if(sum==3){
		printf("thisman is %c\n",thisman);
		flag=1;//����ҵ�������� 
	}
 } 
	
	if(flag!=1){
		printf("sorry can not find thisman\n");
	}
	return 0;
} 
