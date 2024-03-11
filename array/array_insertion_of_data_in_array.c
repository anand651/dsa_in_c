#include <stdio.h>
main()
{
    int a[50], size, i, num, pos;
    printf("enter the size of array");
    scanf("%d", &size);
    printf("enter the element of the array");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("enter the data we want to insert");
    scanf("%d", &num);
    printf("enter the position");
    scanf("%d", &pos);
    if (pos <= 0 || pos > size + 1)
    {
        printf("invalid data");
    }
    else
    {
        for (i = size - 1; i >= pos - 1; i--)
        {
            a[i + 1] = a[i];
        }
        a[pos - 1] = num;
        size++;
    }
    for (i = 0; i < size; i++)
    {
        printf("%d", a[i]);
    }
}
/*enter the size of array5
enter the element of the array0
9
8
7
6
enter the data we want to insert4
enter the position3
094876
PS C:\Users\DELL\OneDrive\Desktop\dsa in c>*/

#include <stdio.h>
void insert(int[], int, int, int);
main()
{
    int x[10], p, q, r, i;
    printf("enter the size of an array");
    scanf("%d", &p);
    printf("enter the number");
    for (i = 0; i < p; i++)
    {
        scanf("%d", &x[i]);
    }
    printf("enter the number and position(index number)");
    scanf("%d%d", &q, &r);
    insert(x, p, q, r);
    printf("after inserted the data");
    for (i = 0; i <= p; i++)
    {
        printf("%d", x[i]);
    }
}
void insert(int y[10], int size, int number, int position)
{
    int i;
    for (i = size; i > position; i--)
    {
        y[i] = y[i - 1];
    }
    y[i] = number;
}
/*enter the size of an array5
enter the number1
2
3
4
5
enter the number and position(index number)9
2
after inserted the data129345
PS C:\Users\DELL\OneDrive\Desktop\dsa in c>*/