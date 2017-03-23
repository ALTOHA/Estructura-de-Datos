#include  <stdio.h>
#include <stdlib.h>

typedef struct nodo{
	int x;
	struct nodo *next;
}Tnodo, *ptrnodo;

	ptrnodo makenodo(int a){
		ptrnodo new = (ptrnodo)malloc(sizeof(Tnodo));
		new -> x = a;
		new->next=NULL;
		return new;
	}
	ptrnodo circleList(int z){
		ptrnodo first, new;
		int i;
		first = new=makenodo(1);
		for(i=2; i<=z; i++){
			new->next=makenodo(i);
			new = new -> next;
		}
		new -> next = first;
		return first;
	}
ptrnodo game (ptrnodo first, int m, int n){
	ptrnodo curr=first, temp;
	int i, j;
	for (i=0; i<n-1; i++){
		for (j=1; j<m; j++){
			temp=curr;
			curr=temp->next;
		}
		temp->next=curr->next;
		free(curr);
		curr=temp->next;
	}	
	return curr;
}

int main(){
	int canguros, interaciones;
	ptrnodo first;

	scanf ("%d %d", &canguros, &interaciones);
	
	first=circleList(canguros);
	first=game(first, interaciones, canguros);
	printf ("El ganador es: %d\n", first->x);
	return 0;
}