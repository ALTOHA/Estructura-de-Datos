#include <stdlib.h>

typedef struct nodo{
	int valor;
	struct nodo *next;
}Tnodo, *ptrnodo;

typedef struct cola{
	ptrnodo tail, top;
}Tcola, *cola;

cola inicola(){
	cola c =(cola)malloc(sizeof(Tcola));
	c->top=c->tail=NULL;

	return c;
}

int isempty(cola c){
	return (c -> top == NULL);
}

void push(cola c, int x){
	ptrnodo new = (ptrnodo)malloc(sizeof(Tnodo));
	new -> valor = x;
	if (isempty(c)){
	c->top=c->tail=new;
	}
	else 
		c -> tail -> next = new;
		c -> tail = new;
}

int pop(cola c){
	if (isempty(c))
		exit(1);
	else{
		int temp = c -> top -> valor;
		ptrnodo a = c -> top;
		c->top=c->top->next;
		free (a);
		return temp;
	}
}