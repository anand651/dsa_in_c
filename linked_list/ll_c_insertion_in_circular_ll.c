#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head, *newnode, *tail, *temp;
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
void insertatbeg()
{
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("enter the data");
    scanf("%d", &newnode->data);
    newnode->next = 0;
    if (tail == 0)
    {
        tail = newnode;
        tail->next = newnode;
    }
    else
    {
        newnode->next = tail->next;
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
    newnode->next = 0;
    if (tail == 0)
    {
        tail = newnode;
        tail->next = newnode;
    }
    else
    {
        newnode->next = tail->next;
        tail->next = newnode;
        tail = newnode;
    }
}

void inseratpos()
{
    // struct node *newnode,*temp;
    int pos, i = 1;
    printf("enter the position");
    scanf("%d", &pos);
    if (pos < 0 || pos > 4)
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
        newnode->next = 0;
        temp = tail->next;
        while (i < pos - 1)
        {
            temp = temp->next;
            i++;
        }
        newnode->next = temp->next;
        temp->next = newnode;
    }
}
main()
{
    createcll();
    int choice = 1;
    display();
    printf("\npress 1 for insert data in begning\n press 2 for inser data in end\n press 3 for insert data in the specific position\n");
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
        inseratpos();
        display();
        break;
    default:
        printf("error");
        break;
    }
}
/*enter the data5
do you want to continue 0,11
enter the data6
do you want to continue 0,11
enter the data7
do you want to continue 0,11
enter the data8
do you want to continue 0,10
display the inserted data
5
6
7
8
press 1 for insert data in begning
 press 2 for inser data in end
 press 3 for insert data in the specific position
1
enter the data90
display the inserted data
90
5
6
7
8
PS C:\Users\DELL\OneDrive\Desktop\dsa in c\linked_list>*/