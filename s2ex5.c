int acha_maior (int a, int b){
    return a > b ? a : b;
}

int diferente (int a, int b){
	if (a==b)
		printf("\nvalores iguais sao ivalidos\n");
	else 
		return 0;
}

int main (){
    int x, y;
    scanf ("%d", &x);
    scanf ("%d", &y);
    if(x==y){
    	int t = diferente (x,y);
		}
    else{
    	int r = acha_maior (x, y);
    		printf ("Maior: %d\n", r);
	}
    return 0;
}
