#include <stdio.h>
#include <stdlib.h>
#pragma once;

typedef int Data;

struct Node{
	Data val;
	struct Node *next;
};
typedef struct Node Node;
void addAtBeginning(Node **head, Data v);
void addAtEnd(Node** head, Data v);
void display(Node *head);
