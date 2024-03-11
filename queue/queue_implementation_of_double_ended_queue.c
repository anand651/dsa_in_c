#include <stdio.h>
#define N 5
int front = -1, rear = -1;
int dequeue[N];
void enqueuefront(int data)
{
    if ((front == 0 && rear == N - 1) || (front == rear + 1))
    {
        printf("queue is full");
    }
    else if (front == -1 && rear == -1)
    {
        front = rear = 0;
        dequeue[front] = data;
    }
    else if (front == 0)
    {
        front = N - 1;
        dequeue[front] = data;
    }
    else
    {
        front--;
        dequeue[front] = data;
    }
}

void enqueuerear(int data)
{
    if ((front == 0 && rear == N - 1) || (front == rear + 1))
    {
        printf("queue is full");
    }
    else if (front == -1 && rear == -1)
    {
        front = rear = 0;
        dequeue[rear] = data;
    }
    else if (rear == N - 1)
    {
        rear = 0;
        dequeue[rear] = data;
    }
    else
    {
        rear++;
        dequeue[rear] = data;
    }
}

void dequeuefront()
{
    if (front == -1 && rear == -1)
    {
        printf("queue is empty");
    }
    else if (front == rear)
    {
        printf("delete the front %d\n", dequeue[front]);
        rear = front = -1;
    }
    else if (front == N - 1)
    {
        printf("delete the front %d\n", dequeue[front]);
        front == 0;
    }
    else
    {
        printf("delete the front %d\n", dequeue[front]);
        front++;
    }
}

void dequeuerear()
{
    if (front == -1 && rear == -1)
    {
        printf("queue is empty");
    }
    else if (front == rear)
    {
        printf("delete the rear %d\n", dequeue[rear]);
        rear = front = -1;
    }
    else if (rear == 0)
    {
        printf("delete the rear %d\n", dequeue[rear]);
        rear == N - 1;
    }
    else
    {
        printf("delete the rear %d\n", dequeue[rear]);
        rear--;
    }
}

void display()
{
    int i;
    for (i = front; i != rear;)
    {
        printf("display the data %d\n", dequeue[i]);
        i = (i + 1) % N;
    }
    printf(" display the data %d\n", dequeue[rear]);
}

main()
{
    enqueuefront(5);
    enqueuefront(6);
    enqueuefront(7);
    enqueuerear(8);
    enqueuerear(9);
    display();
    dequeuefront();
    dequeuerear();
    display();
}
/*display the data 7
display the data 6
display the data 5
display the data 8
 display the data 9
delete the front 7
delete the rear 9
display the data 6
display the data 5
 display the data 8
PS C:\Users\DELL\OneDrive\Desktop\DSA> */

#include <stdio.h>
#define N 5
int front = -1;
int rear = -1;
int queue[N];

void insert_end(int x)
{
    int i;
    if (front == 0 && rear == N - 1)
    {
        printf("queue is full or overflow");
    }
    else if (front == -1 && rear == -1)
    {
        front = rear = 0;
        queue[rear] = x;
    }
    else if (rear == N - 1)
    {
        for (i = front; i <= rear; i++)
        {
            queue[i - 1] = queue[i];
        }
        front--;
        queue[rear] = x;
    }
    else
    {
        rear++;
        queue[rear] = x;
    }
}
void insert_beg(int x)
{
    int i;
    if (front == 0 && rear == N - 1)
    {
        printf("queue is full or overflow");
    }
    else if (front == -1 && rear == -1)
    {
        front = rear = 0;
        queue[rear] = x;
    }
    else if (rear == N - 1)
    {
        front--;
        queue[front] = x;
    }
    else
    {
        for (i = rear; i >= front; i--)
        {
            queue[i + 1] = queue[i];
        }
        rear++;
        queue[front] = x;
    }
}

int delete_beg()
{
    int t = 0;
    if (front == -1)
    {
        printf("queue is empty");
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
int delete_end()
{
    int t = 0;
    if (rear == -1)
    {
        printf("queue is empty");
        return t;
    }
    t = queue[rear];
    if (front == rear)
    {
        front = rear = -1;
    }
    else
    {
        rear--;
    }
    return t;
}

void traverse()
{
    int i;
    if (front == -1)
    {
        printf("queue is empty");
    }
    else
    {
        for (i = front; i <= rear; i++)
        {
            printf("display item %d\n", queue[i]);
        }
    }
}

main()
{
    int r;
    insert_end(10);
    insert_end(20);
    insert_end(30);
    insert_end(40);
    insert_end(50);
    traverse();
    r = delete_beg();
    printf("delete  item %d\n", r);
    traverse();
    insert_end(60);
    traverse();
    r = delete_end();
    printf("delete  item %d\n", r);
    r = delete_end();
    printf("delete  item %d\n", r);
    r = delete_beg();
    printf("delete  item %d\n", r);
    r = delete_beg();
    printf("delete  item %d\n", r);
    r = delete_beg();
    printf("delete  item %d\n", r);
    insert_beg(100);
    insert_beg(90);
    insert_beg(80);
    insert_beg(70);
    insert_beg(60);
    traverse();
    r = delete_beg();
    printf("delete  item %d\n", r);
    traverse();
    insert_beg(50);
    traverse();
}

/*display item 10
display item 20
display item 30
display item 40
display item 50
delete  item 10
display item 20
display item 30
display item 40
display item 50
display item 20
display item 30
display item 40
display item 50
display item 60
delete  item 60
delete  item 50
delete  item 20
delete  item 30
delete  item 40
display item 60
display item 70
display item 80
display item 90
display item 100
delete  item 60
display item 70
display item 80
display item 90
display item 100
display item 50
display item 70
display item 80
display item 90
display item 100
PS C:\Users\DELL\OneDrive\Desktop\DSA>*/