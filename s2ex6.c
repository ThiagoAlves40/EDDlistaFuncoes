#include<stdio.h>
void mes_trimestre (int a){
	scanf("%d",&a);
	switch(a){
		case(1):
			printf("\nJaneiro");
		break;
		
		case(2):
			printf("\nFevereiro");
		break;
		
		case(3):
			printf("\nMarco");
		break;
		
		default:
			printf("\nValor Invalido");
		break;
	}
	return 0;
}

int main (){
	int x;
	mes_trimestre(x);
	scanf("%d", x);
	printf("\n%d",mes_trimestre);

	return 0;
}
