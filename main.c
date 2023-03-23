#include "liste.h"
int main()
{
 char note[] = "0123456789";
    int nrNote = strlen(note);
    Node *head = NULL ;
    head = (Node *)malloc(sizeof(Node));
    head->next = NULL ;
    head->val = note[0];
    for(int i = 1; i<nrNote; i++)
    {
        addAtEnd(&head, note[i]);
    }
    display(head);
    return 0;
}
