#include<stdio.h>

void inverter(int vet[], int i){	
	int trocar, n=i-1;
	for(i=0;i<n;i++){
		trocar=vet[i];
    	vet[i]=vet[n];
    	vet[n]=trocar;
		n--;
	}	
}

int main(){
	int vet[5];
	int i;
	for(i=0;i<5;i++){
		printf("valor %d: ", i+1);
		scanf("%d", &vet[i]);
		printf("\n");
	}
	inverter(vet,i);
	int n = i;
	for(i=0;i<n;i++){
		printf("%d ",vet[i]);
	}
	
	return 0;
}
