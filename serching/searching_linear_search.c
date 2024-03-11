#include <stdio.h>
#define N 10
int l_search(int[], int, int);
main()
{
    int x[N], p, q, i, w;
    printf("enter the size of an array");
    scanf("%d", &p);
    for (i = 0; i < p; i++)
    {
        scanf("%d", &x[i]);
    }
    printf("enter the number you want to search");
    scanf("%d", &q);
    w = l_search(x, q, p);
    if (w == 1)
        printf("number is found");
    else
        printf("number is not found");
}
int l_search(int y[], int r, int s)
{
    int c, p = 0;
    for (c = 0; c < s; c++)
    {
        if (r == y[c])
        {
            p = 1;
            break;
        }
    }
    return p;
}
/*enter the size of an array5
3
5
2
9
3
enter the number you want to search2
number is found
PS C:\Users\DELL\OneDrive\Desktop\dsa in c>*/

#include <stdio.h>
#define N 10
int main()
{
    int x[N], p, i, r, s;
    printf("enter the size of an array");
    scanf("%d", &p);
    for (i = 0; i < p; i++)
    {
        scanf("%d", &x[i]);
    }
    printf("enter the number you want to search");
    scanf("%d", &r);
    for (i = 0; i < p; i++)
    {
        if (r == x[i])
        {
            s = 1;
            break;
        }
    }
    if (s == 1)
        printf("%d index number of that number is %d", i, x[i]);
    else
        printf("%d is not found in this array", r);
    return 0;
}
/*enter the size of an array6
1
2
3
4
5
7
enter the number you want to search9
9 is not found in this array
PS C:\Users\DELL\OneDrive\Desktop\dsa in c>*/

#include <stdio.h>
#define N 10
int main()
{
    int x[N], p, i, r;
    printf("enter the size of an array");
    scanf("%d", &p);
    for (i = 0; i < p; i++)
    {
        scanf("%d", &x[i]);
    }
    printf("enter the number you want to search");
    scanf("%d", &r);
    for (i = 0; i < p; i++)
    {
        if (r == x[i])
        {
            break;
        }
    }
    if (i == p)
        printf("%d is not found in this array", r);
    else
        printf("%d index number of that number is %d", i, x[i]);
    return 0;
}
/*enter the size of an array4
2
7
4
9
enter the number you want to search5
5 is not found in this array
PS C:\Users\DELL\OneDrive\Desktop\dsa in c>*/