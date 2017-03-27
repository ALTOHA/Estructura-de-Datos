#include <stdio.h>
#include <stdlib.h>

typedef struct nodo{
	int num;
	struct nodo *next, *prev;
}Tnodo, *ptrnodo;

typedef struct DoublyList{
 ptrnodo top, tail;
}DoublyList;

DoublyList inserttop(DoublyList lista, int x){
	ptrnodo new = (ptrnodo)malloc(sizeof(Tnodo));
	new -> num = x;
	new -> next = NULL;
	new -> prev = NULL;

	if(lista.top==NULL){
		lista.tail = lista.top = new;
	}else{
		lista.top->next=new;
		new -> prev = lista.top;
		lista.top = new;
	}
	return lista;
}

 void impression (DoublyList lista){
 	while(lista.top!=NULL){
 		printf ("%d ", lista.top->num);
 		lista.top=lista.top->prev;
 	}
 }
 	void impression2(DoublyList lista){
 		while(lista.tail!=NULL){
 			printf ("%d ", lista.tail->num);
 			lista.tail=lista.tail->next;
 		}
 	}

int main(){
	int jei;
	DoublyList lista;
	lista.top=lista.tail=NULL;
	while(scanf ("%d", &jei) && jei!=0){
		lista=inserttop(lista, jei);
	}
		impression(lista);
		printf ("Asc\n");
		impression2(lista);
	return 0;
}