#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};
struct node *head = NULL, *newnode, *tail, *temp;
int count = 0;

void createdll()
{
    int choice;
    do
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("enter the data");
        scanf("%d", &newnode->data);
        newnode->prev = 0;
        newnode->next = 0;
        if (head == 0)
        {
            head = tail = newnode;
        }
        else
        {
            tail->next = newnode;
            newnode->prev = tail;
            tail = newnode;
        }
        printf("do you want to continue 0,1");
        scanf("%d", &choice);
    } while (choice == 1);
}

void display()
{
    temp = head;
    while (temp != 0)
    {
        printf("%d", temp->data);
        temp = temp->next;
        count++;
    }
    printf("\ncount=%d", count);
}

void reverse()
{
    struct node *current, *nextnode;
    current = head;
    while (current != 0)
    {
        nextnode = current->next;
        current->next = current->prev;
        current->prev = nextnode;
        current = nextnode;
    }
    current = head;
    head = tail;
    tail = current;
}

main()
{
    createdll();
    int choice = 1;
    display();
    printf("press 1 for reverse the data\n");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        reverse();
        display();
        break;
    default:
        printf("error");
        break;
    }
}