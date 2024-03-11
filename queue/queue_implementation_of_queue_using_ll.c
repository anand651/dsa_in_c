#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};
struct node *front = 0;
struct node *rear = 0;

void enqueue(int x)
{
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = x;
    newnode->next = 0;
    if (front == 0 && rear == 0)
    {
        rear = front = newnode;
    }
    else
    {
        rear->next = newnode;
        rear = newnode;
    }
}

void display()
{
    struct node *temp;
    if (rear == 0 && front == 0)
    {
        printf("list is empty");
    }
    else
    {
        temp = front;
        while (temp != 0)
        {
            printf("display the inserted data %d\n", temp->data);
            temp = temp->next;
        }
    }
}
void dequeue()
{
    struct node *temp;
    temp = front;
    if (rear == 0 && front == 0)
    {
        printf("list is empty");
    }
    else
    {
        front = front->next;
        free(temp);
    }
}
void peek()
{
    if (rear == 0 && front == 0)
    {
        printf("list is empty");
    }
    else
    {
        printf("peek the top %d\n", front->data);
    }
}

main()
{
    enqueue(5);
    enqueue(6);
    enqueue(7);
    display();
    dequeue();
    peek();
    display();
}

/*display the inserted data 5
display the inserted data 6
display the inserted data 7
peek the top 6
display the inserted data 6
display the inserted data 7
PS C:\Users\DELL\OneDrive\Desktop\DSA>*/