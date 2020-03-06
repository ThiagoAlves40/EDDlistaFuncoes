void decrescente(int vet[],int n) {
	int troca, i, j;
    for(i=0;i<n;i++){
    	for(j=i+1;j<n;j++){
    		if(vet[i]<vet[j]){
    			troca=vet[i];
				vet[i]=vet[j];
				vet[j]=troca;	
			} 
		}
	}	
 }

 int main() {
 	int vet[5];
 	int i;
	for(i=0;i<5;i++){
		printf("valor %d:\n", i+1);
		scanf("%d", &vet[i]);
	}
	decrescente(vet,5);
	for(i=0;i<5;i++){
 		printf("%d ", vet[i]);
	}
	 
	return 0;
}
