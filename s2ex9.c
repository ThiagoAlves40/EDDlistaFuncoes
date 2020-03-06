#include <stdio.h>
int vogal(char c){
	scanf("%s",&c);
	if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
		printf("\neh vogal\n");
	else
		printf("\nnao eh vogal");
	return 0;
}

int main(){
	char c;
	printf("\n%s\n",vogal(c));
	return 0;
}
