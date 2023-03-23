#include "liste.h"

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
    if (*head == NULL)
        addAtBeginning(&*head, v);
    else
    {
        while (aux->next!=NULL)
            aux = aux->next;
        aux->next = newNode;
        newNode->next = NULL;
    }
}

void display(Node *head)
{
    while (head!=NULL)
    {
        printf ("%d ", head->val);
        head=head->next;
    }
    printf("\n");
}

void schimba_k(Node *head, int k)
{
    int i = 1;
    while (head != NULL && i != k)
    {
        head = head->next;
        i++;
    }
    head->val = 50;
}

Node *timp()
{
    Node *head = NULL;
    int i, n = 5, v;
    for (i = 0; i < n; i++)
    {
        v = i*10;
        addAtEnd(&head, v);
    }

    Node *p = head->next;
    while (p != NULL)
    {
        head->val += p->val;
        p->val = 0;
        p = p->next;
    }

    int k = 3;
    i = 1;
    p = head;

    while (p != NULL && i != k-1)
    {
        p = p->next;
        i++;
    }

    Node *temp = NULL;
    Node *q = (Node *)malloc(sizeof(Node));

    q->val = 100;
    temp = p->next;
    p->next = q;
    q->next = temp;

    p = head->next;
    while (p != NULL)
    {
        head->val += p->val;
        p->val = 0;
        p = p->next;
    }

    return head;
}
