#include <stdio.h>
main()
{
    int a[50], size, i, item, pos;
    printf("enter the size of array");
    scanf("%d", &size);
    printf("enter the element of the array");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("from where position you want to delete");
    scanf("%d", &pos);
    if (pos <= 0 || pos > size + 1)
    {
        printf("invalid data\n");
    }
    else
    {
        for (i = pos - 1; i < size - 1; i++)
        {
            a[i] = a[i + 1];
        }
        size--;
    }
    for (i = 0; i < size; i++)
    {
        printf("%d", a[i]);
    }
}
/*enter the size of array5
enter the element of the array1
2
3
4
5
from where position you want to delete4
1235
PS C:\Users\DELL\OneDrive\Desktop\dsa in c>*/

#include <stdio.h>
void insert(int[], int, int, int);
void display(int[], int);
void delete(int[], int, int);
main()
{
    int x[10], p, q, r, i, s;
    printf("enter the size of an array");
    scanf("%d", &p);
    for (i = 0; i < p; i++)
    {
        scanf("%d", &x[i]);
    }
    printf("enter the number and position");
    scanf("%d%d", &q, &r);
    insert(x, p, q, r);
    printf("after the inserted data");
    display(x, p);
    printf("\nenter the position which has been deleted");
    scanf("%d", &s);
    delete (x, s, p);
}
void insert(int y[], int size, int number, int position)
{
    int i;
    for (i = size; i >= position; i--)
    {
        y[i] = y[i - 1];
    }
    y[i] = number;
}
void display(int z[], int size)
{
    int i;
    for (i = 0; i <= size; i++)
    {
        printf("%d", z[i]);
    }
}
void delete(int w[], int dposition, int size)
{
    int i;
    for (i = dposition-1; i <= size; i++)
    {
        w[i] = w[i + 1];
    }
    printf("after the deleted data\n");
    for (i = 0; i < size; i++)
    {
        printf("%d", w[i]);
    }
}
/*enter the size of an array5
1
2
3
4
5
enter the number and position9
3
after the inserted data129345
enter the position which has been deleted4
after the deleted data
12945
PS C:\Users\DELL\OneDrive\Desktop\dsa_in_c\array>*/