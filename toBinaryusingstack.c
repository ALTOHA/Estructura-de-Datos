#include <stdio.h>
#include "stack.h"

int main(){
	int bit, num;

	stack s= iniStack();
	
	scanf ("%d", &num);

	while (num){
		/*bit = n % 2;
		n /= 2*/
		bit = num & 1;
		num >>= 1;
		push(bit, s);
	}

	while (!Empty(s)){
		printf ("%d", pop(s));
	}printf ("\n");

	return 0;
}