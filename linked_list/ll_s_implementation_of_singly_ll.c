#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
main()
{
    struct node *head, *newnode, *temp;
    head = 0;
    int choice, count = 0;
    do
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("enter the data");
        scanf("%d", &newnode->data);
        newnode->next = 0;
        if (head == 0)
        {
            head = temp = newnode;
        }
        else
        {
            temp->next = newnode;
            temp = newnode;
        }
        printf("do you want to continue 0,1");
        scanf("%d", &choice);
    } while (choice == 1);
    temp = head;
    while (temp != 0)
    {
        printf("%d", temp->data);
        temp = temp->next;
        count++;
    }
    printf("\n%d", count);
}
/*enter the data4
do you want to continue 0,11
enter the data5
do you want to continue 0,11
enter the data1
do you want to continue 0,10
451
3
PS C:\Users\DELL\OneDrive\Desktop\dsa_in_c\linked_list>*/