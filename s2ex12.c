#include<stdio.h>
void iguais(int n, float vet[]){
	int i,j,k=0;
	for(i=0;i<n;i++){
		for(j=0;j<5;j++){
			if(vet[i] == vet[j] && i!=j){
				k+=1;
			}
		}
	}
	if(k!=0){
		printf("Iguais");
	}
}

void main(){
	float v[] = {1,2,3,4,5};
	iguais(5,v);
}
