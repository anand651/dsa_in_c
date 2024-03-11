#include <stdio.h>
#include <stdlib.h>
#define N 5
int s1[N], s2[N];
int top1 = -1, top2 = -1;
int count;
void push1();
void push2();
int pop1();
int pop2();
void enqueue();
void dequeue();
void display();
void enqueue(int x)
{
    push1(x);
    count++;
}
void push1(int data)
{
    if (top1 == N - 1)
    {
        printf("list is empty");
    }
    else
    {
        top1++;
        s1[top1] = data;
    }
}

void dequeue()
{
    int a, b, i;
    if (top1 == -1 && top2 == -1)
    {
        printf("queue is empty");
    }
    else
    {
        for (i = 0; i < count; i++)
        {
            a = pop1();
            push2(a);
        }
        b = pop2();
        printf("deleted data %d\n", b);
        count--;
        for (i = 0; i < count; i++)
        {
            a = pop2();
            push1(a);
        }
    }
}

int pop1()
{
    return s1[top1--];
}

int pop2()
{
    return s2[top2--];
}
void push2(int data)
{
    if (top2 == N - 1)
    {
        printf("list is full");
    }
    else
    {
        top2++;
        s2[top2] = data;
    }
}
void display()
{
    int i;
    for (i = 0; i < count; i++)
    {
        printf("inserted data to display %d\n", s1[i]);
    }
}

void main()
{
    enqueue(5);
    enqueue(6);
    enqueue(7);
    enqueue(8);
    display();
    dequeue();
    display();
}

/*inserted data to display 5
inserted data to display 6
inserted data to display 7
inserted data to display 8
deleted data 5
inserted data to display 6
inserted data to display 7
inserted data to display 8
PS C:\Users\DELL\OneDrive\Desktop\DSA>*/
