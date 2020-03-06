#include<stdio.h>
int fatorial (int a){
	if(a>1)
		return a * fatorial(a-1);
	
	else
		return 1;
}

int main(){
	int a = 0;
	scanf("%d",&a);
	printf("\nfatorial de %d = %d\n",a,fatorial(a));
	return 0;
}
