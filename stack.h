#include <stdlib.h>

typedef struct nodo{
	int num;
	struct nodo *next;
}Tnodo, *ptrnodo;

typedef struct stack{
	ptrnodo top;
}Tstack, *stack;

int Empty(stack s){
if(s->top==NULL)
return 1;
else 
return 0;
}

void push (int numb, stack s){
	ptrnodo new = (ptrnodo)malloc(sizeof(Tnodo));
	new -> next = s -> top;
	new -> num = numb;
	s -> top = new;
} 

int pop(stack s){
	if (Empty(s)==0){
	ptrnodo temp = s -> top;
	int numb = s -> top -> num;
	s-> top = s -> top -> next;
	free(temp);
	return numb;
}
}

stack iniStack(){
	stack s =(stack)malloc(sizeof(Tstack));
	s->top=NULL;
	return s;
}