#include <stdio.h>
#define N 5 // #define N 5 - it is not compalsary to use.
int stack[N];
int top = -1;
void push()
{
    int x;
    printf("enter the data");
    scanf("%d", &x);
    if (top == N - 1)
    {
        printf("overflow");
    }
    else
    {
        top++;
        stack[top] = x;
    }
}
void pop()
{
    int item;
    if (top == -1)
    {
        printf("overflow");
    }
    else
    {
        item = stack[top];
        top--;
    }
}
void peek()
{
    if (top == -1)
    {
        printf("stack is empty");
    }
    else
    {
        printf("%d", stack[top]);
    }
}
void display()
{
    int i;
    for (i = top; i >= 0; i--)
    {
        printf("%d", stack[i]);
    }
}
void main()
{
    int ch;
    do
    {
        printf("\n1 push,2 pop,3 peek,4 display\n");
        printf("enter your choice");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            peek();
            break;
        case 4:
            display();
            break;
        default:
            printf("invalid choice");
        }
    } while (ch != 0);
}
/*1 push,2 pop,3 peek,4 display
enter your choice1
enter the data5

1 push,2 pop,3 peek,4 display
enter your choice1
enter the data6

1 push,2 pop,3 peek,4 display
enter your choice1
enter the data7

1 push,2 pop,3 peek,4 display
enter your choice4
765
1 push,2 pop,3 peek,4 display
enter your choice2

1 push,2 pop,3 peek,4 display
enter your choice4
65
1 push,2 pop,3 peek,4 display
enter your choice3
6
1 push,2 pop,3 peek,4 display
enter your choice0
invalid choice
PS C:\Users\DELL\OneDrive\Desktop\DSA>*/

#include <stdio.h>
#define SIZ 5 // it is not compalsary to use
void push(int);
void traverse();
int pop();
int stack[SIZ];
int top = -1;
main()
{
    int r;
    push(10);
    push(20);
    push(5);
    push(80);
    push(90);
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
    if (top == SIZ - 1)
        printf("stack is full or overflow\n");
    else
    {
        top++;
        stack[top] = a;
    }
}
int pop()
{
    int t = 0;
    if (top == -1)
        printf("stack is empty or underflow\n");
    else
    {
        t = stack[top];
        top--;
    }
    return t;
}
void traverse()
{
    int i;
    if (top == -1)
        printf("stack is empty");
    else
    {
        for (i = top; i >= 0; i--)
            printf("%d\n", stack[i]);
    }
}

/*90
80
5
20
10
delete item 90
80
5
20
10
stack is full or overflow
stack is full or overflow
100
80
5
20
10
delete item 100
80
5
20
10
PS C:\Users\DELL\OneDrive\Desktop\DSA> */