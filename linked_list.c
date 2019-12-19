/* singly linked list */
#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
void print_Linked_List(Node* head);


struct NODE 
{
	int data; 
	struct Node* next;

};

typedef struct NODE Node; 

int main ()
{

	 Node* head = NULL; 
	 Node* second = NULL; 
	 Node* third = NULL; 

	head = (Node*) malloc (sizeof(Node)); 
	second = (Node*)malloc(sizeof(Node)); 
	third = (Node*)malloc(sizeof(Node)); 


	head->data = 3; 
	head->next = second; 

	second->data = 4; 
	second->next = third; 

	third->data = 3; 
	third->next = NULL; 
	print_Linked_List(head);
	return 0; 

}

void print_Linked_List(Node* head)
{
	while(head != NULL)
	{
		printf("data=%d\n", head->data);
		head = head->next; 
	}

}