#include <stdio.h>
#include <ctype.h>
void push(int);
int pop();
int top = -1;
int stack[20];
main()
{
    char postfix[50], op;
    int i = 0, a, b, r;
    printf("enter the postfix expression ");
    gets(postfix);
    while (postfix[i] != NULL)
    {
        if (isdigit(postfix[i]))
        {
            push(postfix[i] - 48);   //ascii value of 48 is zero
            i++;
        }
        else
        {
            a = pop();
            b = pop();
            switch (postfix[i++])
            {
            case '+':
                r = b + a;
                break;
            case '-':
                r = b - a;
                break;
            case '*':
                r = b * a;
                break;
            case '%':
                r = b % a;
                break;
            case '/':
                r = b / a;
                break;
            }
            push(r);
        }
    }
    printf("result is %d", pop());
}
void push(int x)
{
    top++;
    stack[top] = x;
}
int pop()
{
    int t;
    t = stack[top];
    top--;
    return t;
}
/*enter the postfix expression 563*4/+
result is 9
PS C:\Users\DELL\OneDrive\Desktop\DSA> */