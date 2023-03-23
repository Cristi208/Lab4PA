#include "liste.h"
#include <stdio.h>
#include <stdlib.h>



void addAtBeginning(Node **head, Data v)
{
	Node* newNode = (Node*)malloc(sizeof(Node));
	newNode->val = v;
	newNode->next = *head;
	*head = newNode;
}

void addAtEnd(Node** head, Data v)
{
	Node *aux=*head;
	Node* newNode = (Node*)malloc(sizeof(Node));
	newNode->val = v;
	if (*head == NULL) addAtBeginning(&*head, v);
	else{
		while (aux->next!=NULL) aux = aux->next;
		aux->next = newNode;
		newNode->next = NULL;
	}
}

void display(Node *head)
{
	while (head!=NULL){
		printf ("%c ", head->val);
		head=head->next;
	}
	printf("\n");
}
