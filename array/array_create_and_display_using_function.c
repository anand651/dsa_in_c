#include <stdio.h>
void create(int[], int);
void display(int[], int);
main()
{
    int x[10], n;
    printf("enter the size of array");
    scanf("%d", &n);
    create(x, n);
    display(x, n);
}
void create(int *y, int p)
{
    printf("enter the number");
    for (int i = 0; i < p; i++)
    {
        scanf("%d", &y[i]);
    }
}
void display(int z[], int q)
{
    printf("number are");
    for (int c = 0; c < q; c++)
    {
        printf("%d\n", z[c]);
    }
}
/*enter the size of array5
enter the number1
2
3
4
5
number are1
2
3
4
5
PS C:\Users\DELL\OneDrive\Desktop\dsa in c>*/