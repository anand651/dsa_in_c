#include <stdio.h>
#define N 10
int main()
{
    int x[N], p, a, j, i, upper, low, mid, num, status=0;
    printf("enter the size of an array");
    scanf("%d", &p);
    for (i = 0; i < p; i++)
    {
        scanf("%d", &x[i]);
    }
    printf("sorted of the data\n");
    for (i = 1; i < p; i++)
    {
        a = x[i];
        j = i - 1;
        while (j >= 0 && x[j] > a)
        {
            x[j + 1] = x[j];
            j--;
        }
        x[j + 1] = a;
    }
    for (i = 0; i < p; i++)
    {
        printf("%d", x[i]);
    }
    low = 0;
    upper = p;
    printf("\nenter the number you can search");
    scanf("%d", &num);
    while (low <= upper)
    {
        mid = (upper + low) / 2;
        if (num > x[mid])
            low = mid + 1;
        else if (num < x[mid])
            upper = mid - 1;
        else
        {
            status = 1;
            break;
        }
    }
    if(status==0)
    printf("number is not found");
    else
    printf("number is found");
    return 0;
}
/*enter the size of an array5
5
3
9
2
7
sorted of the data
23579
enter the number you can search3
number is found
PS C:\Users\DELL\OneDrive\Desktop\dsa in c>*/