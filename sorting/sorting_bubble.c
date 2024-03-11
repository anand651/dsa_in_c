#include <stdio.h>
#define N 5
int main()
{
    int x[N], j, i, t;
    printf("%d is the size of array\n", N);
    printf("enter the array");
    for (i = 0; i < N; i++)
    {
        scanf("%d", &x[i]);
    }
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N - 1 - i; j++)
        {
            if (x[j] > x[j + 1])
            {
                t = x[j];
                x[j] = x[j + 1];
                x[j + 1] = t;
            }
        }
    }
    printf("bubble sorted data\n");
    for (i = 0; i < N; i++)
    {
        printf("%d", x[i]);
    }
    return 0;
}
/*5 is the size of an array
enter the number15
16
6
8
5
bubble sorted data
5681516
PS C:\Users\DELL\OneDrive\Desktop\dsa in c\sorting>*/

#include <stdio.h>
#define N 5

int main()
{
    int x[N], i, j, t;
    printf("%d is the size of an array\n", N);
    printf("enter the number");
    for (i = 0; i < N; i++)
    {
        scanf("%d", &x[i]);
    }
    for (i = N - 1; i >= 1; i--)
    {
        for (j = 0; j < i; j++)
        {
            if (x[j] > x[j + 1])
            {
                t = x[j];
                x[j] = x[j + 1];
                x[j + 1] = t;
            }
        }
    }
    printf("bubble sorted data\n");
    for (i = 0; i < N; i++)
    {
        printf("%d", x[i]);
    }
    return 0;
}
/*5 is the size of an array
enter the number15
16
6
8
5
bubble sorted data
5681516
PS C:\Users\DELL\OneDrive\Desktop\dsa in c\sorting>*/