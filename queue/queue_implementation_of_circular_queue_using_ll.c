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
    if (rear == 0)
    {
        front = rear = newnode;
        rear->next = front;
    }
    else
    {
        rear->next = newnode;
        rear = newnode;
        rear->next = front;
    }
}
void dequeue()
{
    struct node *temp;
    temp = front;
    if (front == 0 && rear == 0)
    {
        printf("list is empty");
    }
    else if (front == rear)
    {
        front = rear = 0;
        free(temp);
    }
    else
    {
        front = front->next;
        rear->next = front;
        free(temp);
    }
}

void peek()
{
    if (front == 0 && rear == 0)
    {
        printf("list is empty");
    }
    else
    {
        printf("top of peek %d\n", front->data);
    }
}
void display()
{
    struct node *temp;
    temp = front;
    if (rear == 0 && front == 0)
    {
        printf("list is empty");
    }
    else
    {
        while (temp->next != front)
        {
            printf("inserted data to display %d\n", temp->data);
            temp = temp->next;
        }
        printf("inserted data to display1 %d\n", temp->data);
    }
}

void main()
{
    enqueue(5);
    enqueue(6);
    enqueue(7);
    display();
    dequeue();
    peek();
    display();
}

/*inserted data to display 5
inserted data to display 6
inserted data to display1 7
top of peek 6
inserted data to display 6
inserted data to display1 7
PS C:\Users\DELL\OneDrive\Desktop\DSA>*/