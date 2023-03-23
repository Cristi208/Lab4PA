#include "liste.h"

int main(void)
{
    int i = 0, n = 10;
    Node *p = NULL;
    p = (Node *)malloc(sizeof(Node));
    p->next = NULL;
    p->val = i;
    Node *head = p;
    for (i = 1; i < n / 2; i++)
    {
        addAtEnd(&head, i);
    }
    for (i = i; i < n; i++)
    {
        addAtBeginning(&head, i);
    }

    display(head);
    int k = 5;
    schimba_k(head, k);
    display(head);

    Node *vector = timp();

    display(vector);
}
