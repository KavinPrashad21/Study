#include<stdio.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head = NULL;

void insert(int n)
{
    struct node *temp = head;
    struct node *newnode;
    newnode->data = n;
    newnode->next = NULL;

    while(temp->next!=NULL){
        temp = temp->next;
    }

    temp->next = newnode;
}

int main()
{
    insert(10);
    insert(20);

    printf("%d", head->data);
}
