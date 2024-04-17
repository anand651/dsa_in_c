#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
    struct node *prev;
} *head, *tail;

void createdll()
{
    struct node *newnode;
    head = 0;
    int choice = 1;
    do
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("enter the data");
        scanf("%d", &newnode->data);
        if (head == 0)
        {
            head = tail = newnode;
            head->next = head;
            head->prev = head;
        }
        else
        {
            tail->next = newnode;
            newnode->prev = tail;
            newnode->next = head;
            head->prev = newnode;
            tail = newnode;
        }
        printf("do want you to continue 0 1");
        scanf("%d", &choice);
    } while (choice == 1);
}
void display()
{
    struct node *temp;
    temp = head;
    if (head == 0)
    {
        printf("list is empty");
    }
    else
    {
        while (temp != tail)
        {
            printf("%d\n", temp->data);
            temp = temp->next;
        }
        printf("%d\n", temp->data);
    }
}
void insertatbeg()
{
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("enter the data");
    scanf("%d", &newnode->data);
    if (head == 0)
    {
        head = tail = newnode;
        newnode->prev = tail;
        newnode->next = head;
    }
    else
    {
        newnode->next = head;
        head->prev = newnode;
        newnode->prev = tail;
        tail->next = newnode;
        head = newnode;
    }
}
void insertatend()
{
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("enter the data");
    scanf("%d", &newnode->data);
    if (head == 0)
    {
        head = tail = newnode;
        newnode->prev = tail;
        newnode->next = head;
    }
    else
    {
        newnode->prev = tail;
        tail->next = newnode;
        newnode->next = head;
        head->prev = newnode;
        tail = newnode;
    }
}

void insertatpos()
{
    struct node *newnode, *temp;
    int pos, i = 1, l;
    temp = head;
    printf("enter the position");
    scanf("%d", &pos);
    if (pos < 1 || pos > 4)
    {
        printf("invalid position");
    }
    else if (pos == 1)
    {
        insertatbeg();
    }
    else
    {
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
        temp->next->prev = newnode;
        temp->next = newnode;
    }
}
main()
{
    createdll();
    int choice = 1;
    display();
    printf("press 1 for insert data in begning\npress 2 for inser data in end\npress 3 for insert data in the specific position\n");
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
do want you to continue 0 11
enter the data2
do want you to continue 0 11
enter the data3
do want you to continue 0 11
enter the data4
do want you to continue 0 10
1
2
3
4
press 1 for insert data in begning
press 2 for inser data in end
press 3 for insert data in the specific position
3
enter the position2
enter the data9
1
9
2
3
4
PS C:\Users\DELL\OneDrive\Desktop\dsa_in_c\linked_list>*/