#include<stdio.h>
void charIgual(int x, char c[], char v[]){
	int i, j;
	for(i=0;i<x;i++){
		for(j=0;j<x;j++){
			if(c[i] == v[i]){
				v[i] = '*';
			}
		}
	}
}

