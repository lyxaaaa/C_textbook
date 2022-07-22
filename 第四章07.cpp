#include <stdio.h>

int main(){
	char ch;
	ch=getchar();
	printf("before is %c : %d\n",ch-1,ch-1);
	printf("now is %c : %d\n",ch,ch);
	printf("after is %c : %d\n",ch+1,ch+1);
	
	return 0;
} 
