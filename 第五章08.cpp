#include <stdio.h>
//��ӡˮ�ɻ��� 

int main(){
	int n,a,b,c,result;
	printf("the result are:\n");
	for(n=100;n<1000;n++){
		//������λ
		c = n/100;
		b = (n%100)/10;
		a = n%10;
		result = a*a*a+b*b*b+c*c*c;
		if(result==n){
			printf("%d ",n);
		} 
	}
	return 0;
}
