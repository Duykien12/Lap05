#include<stdio.h>

int main(){

	int cnt,cnt1;
	cnt=cnt1=0;
	do{
		printf("\n Enter a number:");
		scanf("%d",&cnt);
		printf("no. is %d",cnt);
		cnt1++;
	}while(cnt !=0);
	printf("\n The total numbers enterd were %d",--cnt1);


return 0;

}

