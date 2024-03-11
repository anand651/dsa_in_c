#include <stdio.h>
#include <stdlib.h>
#define N 5
int queue[N];
int front = -1;
int rear = -1;
void enqueue(int x)
{
    if (front == -1 && rear == -1)
    {
        front = rear = 0;
        queue[rear] = x;
    }
    else if (((rear + 1) % N) == front)
    {
        printf("queue is full");
    }
    else
    {
        rear = (rear + 1) % N;
        queue[rear] = x;
    }
}
void display()
{
    int i = front;
    if (front == -1 && rear == -1)
    {
        printf("list is empty");
    }
    else
    {
        printf("queue is\n");
        while (i != rear)
        {
            printf("display the inserted data %d\n", queue[i]);
            i = (i + 1) % N;
        }
        printf("display the inserted data %d\n", queue[rear]);
    }
}
void dequeue()
{
    if (front == -1 && rear == -1)
    {
        printf("queue is empty");
    }
    else if (front == rear)
    {
        front = rear = -1;
    }
    else
    {
        printf("delete data %d\n", queue[front]);
        front = (front + 1) % N;
    }
}
void peek()
{
    printf("peek the top %d\n", queue[front]);
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
/*queue is
display the inserted data 5
display the inserted data 6
display the inserted data 7
delete data 5
peek the top 6
queue is
display the inserted data 6
display the inserted data 7*/

#include <stdio.h>
#define SIZ 5
void cinsert(int);
int cdelete();
void ctraverse();
int front = -1;
int rear = -1;
int cqueue[SIZ];
main()
{
    int r;
    cinsert(10);
    cinsert(20);
    cinsert(5);
    cinsert(80);
    ctraverse();
    r = cdelete();
    printf("delete item %d\n", r);
    ctraverse();
    cinsert(100);
    cinsert(25);
    cinsert(50);
    ctraverse();
    r = cdelete();
    printf("delete item %d\n", r);
    ctraverse();
    cinsert(60);
    ctraverse();
}
void cinsert(int x)
{
    if ((rear == SIZ - 1 && front == 0) || (rear + 1 == front))
    {
        printf("queue is overflow\n");
        return;
    }
    if (rear == SIZ - 1)
    {
        rear = 0;
    }
    else
    {
        rear++;
    }
    cqueue[rear] = x;
    if (front == -1)
    {
        front = 0;
    }
}

int cdelete()
{
    int t = 0;
    if (front == -1)
    {
        printf("queue is empty\n");
        return t;
    }
    t = cqueue[front];
    if (front == SIZ - 1)
    {
        front = 0;
    }
    else if (front == rear)
    {
        front = rear = -1;
    }
    else
    {
        front++;
    }
    return t;
}
void ctraverse()
{
    int i = front;
    while (i != rear)
    {
        printf("display item %d\n", cqueue[i]);
        if (i == 4)
        {
            i = 0;
        }
        else
        {
            i++;
        }
    }
    printf("display1 item %d\n", cqueue[i]);
}
/*display item 10
display item 20
display item 5
display1 item 80
delete item 10
display item 20
display item 5
display1 item 80
queue is overflow
display item 20
display item 5
display item 80
display item 100
display1 item 25
delete item 20
display item 5
display item 80
display item 100
display1 item 25
display item 5
display item 80
display item 100
display item 25
display1 item 60
PS C:\Users\DELL\OneDrive\Desktop\DSA>*/