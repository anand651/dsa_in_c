#include<stdio.h>
void push(int);
int pop();
void traverse();
#define N 5
int top = -1;
int stack[N][1];
main()
{
   int r;
   push(10);
   push(20);
   push(5);
   push(80);
   traverse();
   r = pop();
   printf("delete item %d\n",r);
   traverse();
   push(100);
   push(25);
   push(5);
   traverse();
   r=pop();
   printf("delete item %d\n",r);
   traverse();
}
void push(int a)
{
    if(top==N-1)
    {
        printf("overflow\n");
    }
    else{
        top++;
        stack[top][0]=a;
    }
}
int pop()
{
    int t=0;
    if(top==-1)
    {
        printf("underflow\n");
    }
    else{
        t=stack[top][0];
        top--;
    }
    return t;
}
void traverse()
{
    int i;
    if(top==-1)
    {
        printf("underflow\n");
    }
    else{
        for(i=top;i>=0;i--)
        {
            printf("%d\n",stack[i][0]);
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
PS C:\Users\DELL\OneDrive\Desktop\DSA>*/