#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head, *newnode, *tail;
void createcll()
{
    head = 0;
    int choice;
    do
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("enter the data");
        scanf("%d", &newnode->data);
        newnode->next = 0;
        if (head == 0)
        {
            head = tail = newnode;
        }
        else
        {
            tail->next = newnode;
            tail = newnode;
        }
        tail->next = head;
        printf("do you want to continue 0,1");
        scanf("%d", &choice);
    } while (choice == 1);
}

void display()
{
    struct node *newnode, *temp;
    printf("display the inserted data\n");
    if (head == 0)
    {
        printf("list is empty");
    }
    else
    {
        temp = head;
        while (temp->next != head)
        {
            printf("%d\n", temp->data);
            temp = temp->next;
        }
        printf("%d", temp->data);
    }
}

void reverse()
{
    struct node *current, *prev, *nextnode;
    current = tail->next;
    nextnode = current->next;
    if (tail == 0)
    {
        printf("list is empty");
    }
    else
    {
        while (current != tail)
        {
            prev = current;
            current = nextnode;
            nextnode = current->next;
            current->next = prev;
        }
        nextnode->next = tail;
        tail = nextnode;
        head = current;
    }
}

main()
{
    createcll();
    display();
    int choice = 1;
    printf("enter your choice");
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