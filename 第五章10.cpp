//�ж��Ƿ�Ϊ������
#include <stdio.h>

int main(){
	int n,s,w,m=0;
	scanf("%d",&n);
	s=n;
	while(s!=0){
		w=s%10;//�Ӹߵ����𲽷��� 
		m=10*m+w;
		s=s/10;
	}
	if(m==n){
		printf("yes\n");
	}else{
		printf("no\n");
	}
	return 0;
} 
