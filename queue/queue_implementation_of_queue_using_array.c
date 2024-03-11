#include <stdio.h>
#define N 5
int queue[N];
int front = -1;
int rear = -1;
void enqueue(int x)
{
    if (rear == N - 1)
    {
        printf("overflow\n");
    }
    else if (front == -1 && rear == -1)
    {
        front = rear = 0;
        queue[rear] = x;
    }
    else
    {
        rear++;
        queue[rear] = x;
    }
}

void dequeue()
{
    if (front == -1 && rear == -1)
    {
        printf("list is empty\n");
    }
    else if (front == rear)
    {
        printf("delete %d\n", queue[front]);
        front = rear = -1;
    }
    else
    {
        printf("delete %d\n", queue[front]);
        front++;
    }
}
void peek()
{
    if (front == -1 && rear == -1)
    {
        printf("list is empty\n");
    }
    else
    {
        printf("peek %d\n", queue[front]);
    }
}

void display()
{
    int i;
    if (front == -1 && rear == -1)
    {
        printf("list is empty");
    }
    else
    {
        for (i = front; i <= rear; i++)
        {
            printf("display %d\n", queue[i]);
        }
    }
}

void main()
{
    enqueue(2);
    enqueue(5);
    enqueue(-1);
    display();
    peek();
    dequeue();
    dequeue();
    dequeue();
    peek();
    display();
}
/*display 2
display 5
display -1
peek 2
delete 2
delete 5
delete -1
list is empty
list is empty
PS C:\Users\DELL\OneDrive\Desktop\DSA> */

#include <stdio.h>
#define SIZ 5
int queue[SIZ];
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
        printf("queue is overflow\n");
        return;
    }
    rear++;
    queue[rear] = x;
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
        printf("queue is empty\n");
        return t;
    }
    t = queue[front];
    if (front == rear)
    {
        front = rear = -1;
    }
    else
    {
        front++;
    }
    return t;
}
void traverse()
{
    int i;
    if (front == -1)
    {
        printf("queue is empty\n");
    }
    else
    {
        for (i = front; i <= rear; i++)
        {
            printf("display item %d\n", queue[i]);
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
queue is overflow
queue is overflow
display item 20
display item 5
display item 80
display item 100
delete item 20
display item 5
display item 80
display item 100
PS C:\Users\DELL\OneDrive\Desktop\DSA>*/