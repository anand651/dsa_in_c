#include <stdio.h>
#define SIZ 5
int queue[SIZ][1];
int front = -1;
int rear = -1;
void insert(int);
int delete();
void traverse();
main()
{
    int r;
    insert(10);
    insert(20);
    insert(5);
    insert(80);
    traverse();
    r = delete ();
    printf("delete item %d\n", r);
    traverse();
    insert(100);
    insert(25);
    insert(5);
    traverse();
    r = delete ();
    printf("delete item %d\n", r);
    traverse();
}
void insert(int x)
{
    if (rear == SIZ - 1)
    {
        printf("queue is full or overflow\n");
        return;
    }
    rear++;
    queue[rear][0] = x;
    if (front == -1)
    {
        front = 0;
    }
}

int delete()
{
    int t = 0;
    if (front == -1)
    {
        printf("queue is empty or underflow\n");
    }
    t = queue[front][0];
    if (front == rear)
    {
        front = rear = -1;
        return t;
    }
    else
    {
        front++;
        return t;
    }
}

void traverse()
{
    int i;
    if (rear == -1)
    {
        printf("queue is empty\n");
    }
    else
    {
        for (i = front; i <= rear; i++)
        {
            printf("display item %d\n", queue[i][0]);
        }
    }
}

/*display item 10
display item 20
display item 5
display item 80
delete item 10
display item 20
display item 5
display item 80
queue is full or overflow
queue is full or overflow
display item 20
display item 5
display item 80
display item 100
delete item 20
display item 5
display item 80
display item 100
PS C:\Users\DELL\OneDrive\Desktop\DSA> */