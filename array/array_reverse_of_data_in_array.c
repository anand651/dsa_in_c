#include <stdio.h>
main()
{
    int x[5], size, i, a;
    printf("enter the size of array");
    scanf("%d", &size);
    printf("enter the data");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &x[i]);
    }
    printf("display the inserted data\n");
    for (i = 0; i < size; i++)
    {
        printf("%d\n", x[i]);
    }

    printf("reverse the data of array");
    for (i = 0; i < size / 2; i++)
    {
        a = x[i];
        x[i] = x[size - 1 - i];
        x[size - 1 - i] = a;
    }
    for (i = 0; i < size; i++)
    {
        printf("%d\n", x[i]);
    }
}
/*enter the size of array5
enter the data1
2
3
4
5
display the inserted data
1
2
3
4
5
reverse the data of array5
4
3
2
1
PS C:\Users\DELL\OneDrive\Desktop\dsa in c>*/

#include <stdio.h>
void reverse(int[], int);
main()
{
    int x[10], p, q, r, i;
    printf("enter the size of an array");
    scanf("%d", &p);
    for (i = 0; i < p; i++)
    {
        scanf("%d", &x[i]);
    }
    reverse(x, p);
}
void reverse(int y[], int position)
{
    int i, c, t;
    for (i = 0, c = position - 1; i < position / 2; i++, c--)
    {
        t = y[i];
        y[i] = y[c];
        y[c] = t;
    }
    for (i = 0; i < position; i++)
    {
        printf("%d", y[i]);
    }
}
/*enter the size of an array5
1
2
3
4
5
54321
PS C:\Users\DELL\OneDrive\Desktop\dsa in c>*/