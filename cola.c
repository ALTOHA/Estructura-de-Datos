#include <stdio.h>
#include "colas.h"

int main(){
	int jei;
	cola c =inicola();
	while(scanf ("%d", &jei)&& jei!=0){
		push(c, jei);
	}
	while (!isempty(c)){
		printf ("%d ", pop(c));
	}
	printf ("\n");
	return 0;
}