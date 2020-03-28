#include <iostream>

using namespace std;

struct Node{
	int data;
	struct Node* next; 
}; 

struct Node* head = NULL; 
struct Node* tail = NULL; 
struct Node* temp_head = NULL;


struct Node* createLinkedList(int value)
{
	struct Node* temp = new (Node); 
	temp->data = value; 
	temp->next = NULL; 
	if (head == NULL){
		head = temp; 
		tail = temp; 
		temp = NULL;
	}
	else{
		tail->next = temp; 
		tail = temp; 
	}

	//cout << "head00" << head->data <<endl; 
	return head; 
 }
/*
	iterative method 
*/
/*struct Node* reverseLinkedList(struct Node **tm)
{
	if (*tm == NULL)
		return 0; 
	struct Node* current = (*tm); 
	struct Node* previous = NULL; 
	struct Node* next = NULL; 
	
	while(current != NULL){
		next = current->next; 
		current->next = previous; 
		previous = current; 
		current = next; 
	}
	return previous; 
}*/
/*
	recursive method 
*/ 
struct Node* reverseLinkedList(struct Node *tm)
{
	if (tm == NULL){
		return 0; 
	}
	struct Node* current = (tm); 


	if (current->next == NULL)
	{ 
		temp_head = current; 

		return 0; 
	}

	reverseLinkedList(current->next);
	struct Node* previous = current->next; 
	previous->next = current; 
	current->next = NULL; 
	return temp_head; 
}


void printLinkedList(struct Node** tmp2){
 	while(*tmp2 != NULL)
	{
		cout << (*tmp2)->data <<"->" ;
		*tmp2 = ((*tmp2)->next); 
	}
	cout << "NULL";
	cout << endl; 
 }


int main ()
{
	struct Node* createLinkedList(int value); 
	void printLinkedList(struct Node **tmp2); 
	struct Node* reverseLinkedList(struct Node *tm);

	struct Node* tmp = NULL; 
	struct Node* tail = NULL; 
	for (int i=0; i<6; i++){
		tmp = createLinkedList(i);
	}
	struct Node* tmp2 = reverseLinkedList(tmp);
	printLinkedList(&tmp2);


	return 0; 
}


