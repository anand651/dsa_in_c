#include <stdio.h>
#define SIZ 5
void insert(int);
int delete();
void traverse();
struct queue_ADT
{
    int queue[SIZ];
    int rear;
    int front;
};
struct queue_ADT s;
main()
{
    int r;
    s.rear = -1;
    s.front = -1;
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
    if (s.rear == SIZ - 1)
    {
        printf("queue is full or overflow\n");
        return;
    }
    s.rear++;
    s.queue[s.rear] = x;
    if (s.front == -1)
    {
        s.front = 0;
    }
}
int delete()
{
    int t = 0;
    if (s.front == -1)
    {
        printf("queue is empty or underflow\n");
        return t;
    }
    t = s.queue[s.front];
    if (s.rear == s.front)
    {
        s.front = s.rear = -1;
        return t;
    }
    else
    {
        s.front++;
        return t;
    }
}

void traverse()
{
    int i;
    if (s.front == -1)
    {
        printf("queue is empty\n");
    }
    else
    {
        for (i = s.front; i <= s.rear; i++)
        {
            printf("display item %d\n", s.queue[i]);
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
PS C:\Users\DELL\OneDrive\Desktop\DSA>*/