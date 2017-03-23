#include <stdio.h>
#include <stdlib.h>

typedef struct nodo{
	int x;
	struct nodo *next;
}Tnodo, *ptrnodo;

ptrnodo MakeNodo(int a){
	ptrnodo new = (ptrnodo)malloc(sizeof(Tnodo));
	new-> x=a;
	new->next=NULL;

	return new;
}

ptrnodo insert(ptrnodo top, int a){
	ptrnodo curr, temp = NULL, new;
	curr=top;
	new=MakeNodo(a);

	while(curr != NULL && new->x > curr->x){
		temp=curr;
		curr=curr->next;
	}
		if(temp == NULL){
			new -> next = top;
			return  new;
		}
		else{
			temp->next=new;
			new ->next=curr;
			return top;
		}
		
}

void printList(ptrnodo top){
	while(top!=NULL){
		printf("%d\n", top->x);
		top=top->next;

	}
}
int main(){
	int x;
	ptrnodo top=NULL;
	while(scanf ("%d", &x) && x!=0){
		top = insert(top, x);
	}
	printList(top);

	return 0;
}