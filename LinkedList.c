#include <stdio.h>
#include <stdlib.h>

typedef struct nodo{
	int num;
	struct nodo *next; 
}Tnodo, *ptrNodo;

ptrNodo MakeNodo (int n){
	ptrNodo new=(ptrNodo)malloc(sizeof(Tnodo));
	new -> num = n;
	new -> next = NULL;
	return new;
}

void printnList(ptrNodo top){
	while (top != NULL){
		printf ("%d\n", top -> num);
		top= top -> next;
	}
}
int main(){
	ptrNodo top=NULL, new;
	int n;

	while (scanf ("%d", &n) && n!=0){
		new = MakeNodo(n);
		new -> next = top;
		top = new;
	}	
	printnList(top);	

	return 0;
}