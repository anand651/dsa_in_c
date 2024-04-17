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

void deletefrombeg()
{
    if (head == 0)
    {
        printf("list is empty");
    }
    else
    {
        temp = head;
        head = head->next;
        head->prev = 0;
        free(temp);
    }
}

void deletefromend()
{
    if (tail == 0)
    {
        printf("list is empty");
    }
    else
    {
        temp = tail;
        tail->prev->next = 0;
        tail = tail->prev;
        free(temp);
    }
}

void deletefrompos()
{
    int pos, i = 1;
    temp = head;
    printf("enter position");
    scanf("%d", &pos);
    while (i < pos)
    {
        temp = temp->next;
        i++;
    }
    temp->prev->next = temp->next;
    temp->next->prev = temp->prev;
    free(temp);
}

main()
{
    createdll();
    int choice = 1;
    display();
    printf("press 1 for delete data in begning\npress 2 for delete data in end\npress 3 for delete data in the specific position\n");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        deletefrombeg();
        display();
        break;
    case 2:
        deletefromend();
        display();
        break;
    case 3:
        deletefrompos();
        display();
        break;
    default:
        printf("error");
        break;
    }
}
/*enter the data1
do you want to continue 0,11
enter the data7
do you want to continue 0,11
enter the data9
do you want to continue 0,10
179
count=3press 1 for delete data in begning
press 2 for delete data in end
press 3 for delete data in the specific position
3
enter position2
19
count=2
PS C:\Users\DELL\OneDrive\Desktop\dsa_in_c\linked_list>*/