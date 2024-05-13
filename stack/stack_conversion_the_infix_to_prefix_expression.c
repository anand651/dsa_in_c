/*program for infix to prefix*/
// #include <stdio.h>
// #include <ctype.h>
// #include <string.h>
// void push(char);
// char pop();
// int prec(char);
// char stack[20];
// int top = -1;
// main()
// {
//     char infix[50], prefix[50], op;
//     int i = 0, j = 0;
//     printf("enter an infix expression preceded by '(' ");
//     gets(infix);
//     strrev(infix);
//     printf("%s\n", infix);
//     push(')');
//     while (infix[i] != NULL)
//     {
//         if (isalpha(infix[i]) || isdigit(infix[i]))
//         {
//             prefix[j++] = infix[i++];
//         }
//         else if (infix[i] == '+' || infix[i] == '-' || infix[i] == '*' || infix[i] == '%' || infix[i] == '/' || infix[i] == '^')
//         {
//             op = infix[i++];
//             while (prec(op) < prec(stack[top]))
//             {
//                 prefix[j++] = pop();
//             }
//             push(op);
//         }
//         else if (infix[i] == ')')
//         {
//             push(infix[i++]);
//         }
//         else if (infix[i] == '(')
//         {
//             while (stack[top] != ')')
//             {
//                 prefix[j++] = pop();
//             }
//             pop();
//             i++;
//         }
//     } /*end of while loop*/
//     prefix[j] = NULL;
//     printf("prefix expression is %s\n", strrev(prefix));
// } /*end of main*/

// void push(char x)
// {
//     top++;
//     stack[top] = x;
// }
// char pop()
// {
//     char t;
//     t = stack[top];
//     top--;
//     return t;
// }
// int prec(char x)
// {
//     switch (x)
//     {
//     case ')':
//         return 1;
//     case '+':
//     case '-':
//         return 2;
//     case '*':
//     case '%':
//     case '/':
//         return 3;
//     default:
//         return 4;
//     }
// }

/*enter an infix expression preceded by '(' (x+y*z-m/d
d/m-z*y+x(
prefix expression is -+x*yz/md
PS C:\Users\DELL\OneDrive\Desktop\DSA>*/

/*program for infix to prefix*/
#include <stdio.h>
#include <ctype.h>
#include <string.h>
void push(char);
char pop();
int prec(char);
char stack[20];
int top = -1;
int main()
{
    char infix[50], prefix[50], op;
    int i = 0, j = 0;
    printf("enter an infix expression preceded by '(' ");
    gets(infix);
    push(')');
    while (infix[i] != '\0')
    {
        i++;
    }
    i--;
    while (i >= 0)
    {
        // if (isalpha(infix[i]) || isdigit(infix[i]))   OR
        if(isalnum(infix[i]))
        {
            prefix[j++] = infix[i--];
        }
        else if (infix[i] == '+' || infix[i] == '-' || infix[i] == '*' || infix[i] == '%' || infix[i] == '/' || infix[i] == '^')
        {
            op = infix[i--];
            while (prec(op) < prec(stack[top]))
            {
                prefix[j++] = pop();
            }
            push(op);
        }
        else if (infix[i] == ')')
        {
            push(infix[i--]);
        }
        else if (infix[i] == '(')
        {
            while (stack[top] != ')')
            {
                prefix[j++] = pop();
            }
            pop();
            i--;
        }
    } // end of while loop
    prefix[j] = '\0';
    printf("prefix expression is %s\n", strrev(prefix));
    return 0;
} // end of main

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
    case ')':
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

/*enter an infix expression preceded by '(' (a-b*c^d/e+m*s^g
prefix expression is +-a/*b^cde*m^sg
PS C:\Users\DELL\OneDrive\Desktop\DSA>*/
