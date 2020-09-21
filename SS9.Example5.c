#include<stdio.h>

int main(){

	int count = 1;
	while(count<=100){
		printf("\n This is iteration: %d\n",count);
		count +=5;
		printf("\n This is iteration: %d\n",count);
		count -=5;
		
	}
	printf("\n The loop is completed.\n");

return 0;

}

