#include <iostream>
#define ERR "ERROR EN OPERACION"

using namespace std;

class Nodo{
private:
	int value; //this
public: 
	Nodo *next;
	Nodo(void){
		next = NULL;
	}
	Nodo(int value){
		this->value = value;
		next = NULL;
	}
	int getValue(){
		return value;
	}
};

class linkedlist{
private:
	Nodo *top, *tail;
public:
	linkedlist(void){
		top = tail = NULL;
	}
	bool IsEmpty(){
		return top == NULL;
	}	
	void insert(int num){
		Nodo *temp = new Nodo(num);
		if(IsEmpty()){
			top = tail = temp;
		}
		else {
			tail -> next = temp;
			tail = temp;
		}
	}
	void deleteTop();
	void printList();
};

void linkedlist::deleteTop(){
	if (IsEmpty()){
		cout<<ERR<<endl;
	}
	else{
		Nodo *temp = top;
		top = top->next;
		delete(temp); 
	}
}

void linkedlist::printList(){
	Nodo *temp =top;
	while (temp != NULL){
		cout << temp -> getValue() << endl;
		temp= temp -> next;
	}
}

int main(){
	linkedlist mylist;
	int num;
	for(;;){
		if (cin >> num && num!=0){
			mylist.insert(num);
		}else break;
	}
	mylist.printList();

return 0;
}