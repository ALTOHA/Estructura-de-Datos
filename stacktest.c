#include <stdio.h>
#include "stack.h"

int main(){
	int casos, num;

	stack s= iniStack();

	scanf ("%d", &casos);

	while (casos--){
		scanf ("%d", &num);
		push(num, s); 
	}

	while (!Empty(s)){
		printf ("%d ", pop(s));
	}printf ("\n");

	return 0;
}