//��ӡͼ��
#include <stdio.h>
int print_one();
int print_two();
int print_three();

int main(){
	print_three();
	return 0;
}

int print_one(){
	int i,j,k;
	//ǰ���� 
	for(i=0;i<3;i++){
		for(j=0;j<i;j++){//��ӡ�ո� 
			printf(" ");
		}
		for(j=0;j<5-2*i;j++){//��ӡ���� 
			printf("*");
		}
		printf("\n");//һ�н��� 
	}
	//������
	for(i=0;i<2;i++){
		for(j=1;j>i;j--){//��ӡ�ո� 
			printf(" ");
		}
		for(j=0;j<3+2*i;j++){//��ӡ���� 
			printf("*");
		}
		printf("\n"); 
	} 
}

int print_two(){
	int i,j;
	for(i=1;i<6;i++){
		for(j=0;j<=10-2*i;j++){
			printf(" ");
		}
		printf("*****\n");
	}
} 

int print_three(){
	int i,j;
	for(i=1;i<6;i++){
		for(j=1;j<=2*i-1;j++){
			printf("*");
		}
		printf("\n");
	}
}
