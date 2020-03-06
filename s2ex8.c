#include<stdio.h>
int primo(num)
{	int i, cont, j, divisores;
	for(i=0; i<1; i++) {
		scanf("%d", &num);
		divisores=0;
	for(j=1; j<=num; j++) {
		if(num%j == 0) divisores++;
	}
	if(divisores==2) 
		printf("\nPrimo\n");
	else 
		printf("\nNao primo\n");
	}
	return 0;
}

int main(){
	int num;
	printf("\n%d\n",primo(num));
return 0;
}
