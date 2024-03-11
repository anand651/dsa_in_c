#include<stdio.h>
#include<ctype.h>
void push(int);
int pop();
int top = -1;
int stack[20];
main()
{
    char prefix[50],op;
    int i=0,a,b,r;
    printf("enter the prefix expression ");
    gets(prefix);
    while(prefix[i]!='\0')
    {   
        i++;
    }
    i--;
    while(i>=0)
    {
            if(isdigit(prefix[i]))
        {
            push(prefix[i]-48);
            i--;
        }
        else{
            a=pop();
            b=pop();
            switch(prefix[i--])
            {
                case '+':r=b+a; break;
                case '-':r=b-a; break;
                case '*':r=b*a; break;
                case '%':r=b%a; break;
                case '/':r=b/a; break;
            }
            push(r);
        }
    }
printf("result is %d",pop());
}
void push(int x)
{
    top++;
    stack[top]=x;

}
int pop()
{
    int t;
    t=stack[top];
    top--;
    return t;
}

