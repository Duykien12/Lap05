#include<stdio.h>

int main(){

	int x;
	char i,ans;
	i ='';
	do{
		x = 0;
		ans ='y';
		printf("\n Enter sequece of character:");
		do{
			i = getchar();
			x++;
		}while(i != '\n');
		i = '';
		printf("\nNumber of characters entered is: %d",--x);
		printf("\nmore sequences (Y/N)?");
		ans = getchar();
		
	}while(ans=='Y'||ans=='y');


return 0;

}

