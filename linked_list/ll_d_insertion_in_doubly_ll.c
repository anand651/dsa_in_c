#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};
struct node *head = NULL, *newnode, *tail, *temp;
int count;

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
    count=0;
    temp = head;
    while (temp != 0)
    {
        printf("%d", temp->data);
        temp = temp->next;
        count++;
    }
    printf("\ncount=%d", count);
}

void insertatbeg()
{
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("enter the data");
    scanf("%d", &newnode->data);
    newnode->prev = 0;
    newnode->next = 0;
    head->prev = newnode;
    newnode->next = head;
    head = newnode;
}

void insertatend()
{
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("enter the data");
    scanf("%d", &newnode->data);
    newnode->prev = 0;
    newnode->next = 0;
    tail->next = newnode;
    newnode->prev = tail;
    tail = newnode;
}
void insertatpos()
{
    int pos, i = 1;
    printf("enter the position");
    scanf("%d", &pos);
    temp=head;
    while(temp->next!=NULL)
    {
        count++;
        temp=temp->next;
    }
    if (pos > count || pos <= 0)
    {
        printf("invalid position");
    }
    else if (pos == 1)
    {
        insertatbeg();
    }
    else
    {
        temp = head;
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("enter the data");
        scanf("%d", &newnode->data);
        while (i < pos - 1)
        {
            temp = temp->next;
            i++;
        }
        newnode->prev = temp;
        newnode->next = temp->next;
        temp->next = newnode;
        newnode->next->prev = newnode;
    }
}

main()
{
    createdll();
    int choice = 1;
    display();
    printf("\npress 1 for insert data in begning\npress 2 for inser data in end\npress 3 for insert data in the specific position\n");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        insertatbeg();
        display();
        break;
    case 2:
        insertatend();
        display();
        break;
    case 3:
        insertatpos();
        display();
        break;
    default:
        printf("error");
        break;
    }
}
/*enter the data1
do you want to continue 0,11
enter the data9
do you want to continue 0,11
enter the data4
do you want to continue 0,10
194
count=3
press 1 for insert data in begning
press 2 for inser data in end
press 3 for insert data in the specific position
3
enter the position2
enter the data8
1894
count=4
PS C:\Users\DELL\OneDrive\Desktop\dsa_in_c\linked_list>*/