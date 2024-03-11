#include <stdio.h>
void push(int);
int pop();
void traverse();
#define N 5
struct stack_adt
{
    int top;
    int stack[N];
};
struct stack_adt s;
main()
{
    s.top = -1;
    int r;
    push(10);
    push(20);
    push(5);
    push(80);
    traverse();
    r = pop();
    printf("delete item %d\n", r);
    traverse();
    push(100);
    push(25);
    push(5);
    traverse();
    r = pop();
    printf("delete item %d\n", r);
    traverse();
}
void push(int a)
{
    if (s.top == N - 1)
    {
        printf("overflow\n");
    }
    else
    {
        s.top++;
        s.stack[s.top] = a;
    }
}
int pop()
{
    int t = 0;
    if (s.top == -1)
    {
        printf("underflow\n");
    }
    else
    {
        t = s.stack[s.top];
        s.top--;
    }
    return t;
}
void traverse()
{
    int i;
    if (s.top == -1)
    {
        printf("underflow\n");
    }
    else
    {
        for (i = s.top; i >= 0; i--)
        {
            printf("%d\n", s.stack[i]);
        }
    }
}

/*80
5
20
10
delete item 80
5
20
10
overflow
25
100
5
20
10
delete item 25
100
5
20
10
PS C:\Users\DELL\OneDrive\Desktop\DSA> */

#include <stdio.h>
void push(int);
int pop();
void traverse();
#define N 5
struct stack_adt
{
    int top;
    int stack[N];
} s = {-1, 5};
main()
{
    int r;
    push(10);
    push(20);
    push(5);
    push(80);
    traverse();
    r = pop();
    printf("delete item %d\n", r);
    traverse();
    push(100);
    push(25);
    push(5);
    traverse();
    r = pop();
    printf("delete item %d\n", r);
    traverse();
}
void push(int a)
{
    if (s.top == N - 1)
    {
        printf("overflow\n");
    }
    else
    {
        s.top++;
        s.stack[s.top] = a;
    }
}
int pop()
{
    int t = 0;
    if (s.top == -1)
    {
        printf("underflow\n");
    }
    else
    {
        t = s.stack[s.top];
        s.top--;
    }
    return t;
}
void traverse()
{
    int i;
    if (s.top == -1)
    {
        printf("underflow\n");
    }
    else
    {
        for (i = s.top; i >= 0; i--)
        {
            printf("%d\n", s.stack[i]);
        }
    }
}
/*80
5
20
10
delete item 80
5
20
10
overflow
25
100
5
20
10
delete item 25
100
5
20
10
PS C:\Users\DELL\OneDrive\Desktop\DSA> */