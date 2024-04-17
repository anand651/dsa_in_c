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

void deleteatbeg()
{
    struct node *tem;
    tem = tail->next;
    if (tail == 0)
    {
        printf("list is empty");
    }
    else if (tem->next == tem)
    {
        tail = 0;
        free(tem);
    }
    else
    {
        tail->next = tem->next;
        head = tem->next;
        free(tem);
    }
}

void deleteatend()
{
    struct node *current, *prev;
    current = tail->next;
    if (tail == 0)
    {
        printf("list is empty");
    }
    else if (current->next == current)
    {
        tail = 0;
        free(current);
    }
    else
    {
        while (current->next != tail->next)
        {
            prev = current;
            current = current->next;
        }
        prev->next = tail->next;
        tail = prev;
        free(current);
    }
}
void deleteatpos()
{
    struct node *current, *nextnode;
    int pos, i = 1;
    current = tail->next;
    printf("enter the position");
    scanf("%d", &pos);
    if (pos < 1 || pos > 4)
    {
        printf("invalid position");
    }
    else if (pos == 1)
    {
        deleteatend();
    }
    else
    {
        while (i < pos - 1)
        {
            current = current->next;
            i++;
        }
        nextnode = current->next;
        current->next = nextnode->next;
        free(nextnode);
    }
}
main()
{
    createcll();
    int choice = 1;
    display();
    printf("\npress 1 for delete data in begning\npress 2 for delete data in end\npress 3 for delete data in the specific position\n");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        deleteatbeg();
        display();
        break;
    case 2:
        deleteatend();
        display();
        break;
    case 3:
        deleteatpos();
        display();
        break;
    default:
        printf("error");
        break;
    }
}
/*enter the data1
do you want to continue 0,11
enter the data2
do you want to continue 0,11
enter the data3
do you want to continue 0,11
enter the data4
do you want to continue 0,10
display the inserted data
1
2
3
4
press 1 for delete data in begning
press 2 for delete data in end
press 3 for delete data in the specific position
3
enter the position2
display the inserted data
1
3
4
PS C:\Users\DELL\OneDrive\Desktop\dsa_in_c\linked_list>*/