//�Ӽ������뵽���ڵ������������ȥ�˶����죬ʱ���֣���
#include <stdio.h>

int main(){
	unsigned long t,r;
	int d,h,m,s;
	printf("seconds=");
	scanf("%d",&t);
	//���� 
	d=t/(24*3600);
	//��ȥ������ʣ������ 
	r=t%(24*3600);
	//Сʱ 
	h=r/3600;
	//�� 
	m=(r%3600)/60;
	//�� 
	s=(r%3600)%60;
	printf("have passed %d days  %02d:%02d��%02d\n",d,h,m,s);
	return 0;
}
 
