//从键盘输入到现在的秒数，计算过去了多少天，时，分，秒
#include <stdio.h>

int main(){
	unsigned long t,r;
	int d,h,m,s;
	printf("seconds=");
	scanf("%d",&t);
	//天数 
	d=t/(24*3600);
	//除去天数后剩余秒数 
	r=t%(24*3600);
	//小时 
	h=r/3600;
	//分 
	m=(r%3600)/60;
	//秒 
	s=(r%3600)%60;
	printf("have passed %d days  %02d:%02d：%02d\n",d,h,m,s);
	return 0;
}
 
