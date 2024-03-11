#include <stdio.h>
#include <ctype.h>
void push(char);
char pop();
int prec(char);
int top = -1;
int stack[20];
int main()
{
    char infix[50], postfix[50], op;
    int i = 0, j = 0;
    printf("enter an infix expression followed by ')'");
    gets(infix);
    push('(');
    while (infix[i] != NULL)
    {
        if (isalpha(infix[i]) || isdigit(infix[i]))
        {
            postfix[j++] = infix[i++];
        }
        else if (infix[i] == '+' || infix[i] == '-' || infix[i] == '*' || infix[i] == '/' || infix[i] == '%' || infix[i] == '^')
        {
            op = infix[i++];
            while (prec(op) <= prec(stack[top]))
            {
                postfix[j++] = pop();
            }
            push(op);
        }
        else if (infix[i] == '(')
        {
            push(infix[i++]);
        }
        else if (infix[i] == ')')
        {
            while (stack[top] != '(')
            {
                postfix[j++] = pop();
            }
            pop();
            i++;
        }
    } /*end of while loop*/
    postfix[j] = NULL;
    printf("postfix expression is %s\n", postfix);
    return 0;
} /*end of main*/

void push(char x)
{
    top++;
    stack[top] = x;
}
char pop()
{
    char t;
    t = stack[top];
    top--;
    return t;
}
int prec(char x)
{
    switch (x)
    {
    case '(':
        return 1;
    case '+':
    case '-':
        return 2;
    case '*':
    case '%':
    case '/':
        return 3;
    default:
        return 4;
    }
}
/*enter an infix expression followed by ')'a+((b+c)*(d+e)+f/g))
postfix expression is abc+de+*fg/++
PS C:\Users\DELL\OneDrive\Desktop\DSA>*/