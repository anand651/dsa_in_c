#include <stdio.h>
main()
{
    int x[10], y[10], z[10], size1, size2, i, j, k, a;
    printf("enter the size of array");
    scanf("%d", &size1);
    printf("enter the data of 1 array");
    for (i = 0; i < size1; i++)
    {
        scanf("%d", &x[i]);
    }

    printf("enter the size2 of array");
    scanf("%d", &size2);
    printf("enter the data of 2 array");
    for (j = 0; j < size2; j++)
    {
        scanf("%d", &y[j]);
    }

    printf("display the inserted data of 1 array\n");
    for (i = 0; i < size1; i++)
    {
        printf("%d\n", x[i]);
    }

    printf("display the inserted data of 2 array\n");
    for (j = 0; j < size2; j++)
    {
        printf("%d\n", y[j]);
    }

    i = j = k = 0;
    while (i < size1 && j < size2)
    {
        if (x[i] > y[j])
        {
            z[k] = y[j];
            k++;
            j++;
        }
        else if (x[i] < y[j])
        {
            z[k] = x[i];
            i++;
            k++;
        }
        else
        {
            z[k] = x[i];
            i++;
            k++;
        }
    }
    while (i < size1)
    {
        z[k] = x[i];
        i++;
        k++;
    }
    while (j < size2)
    {
        z[k] = y[j];
        j++;
        k++;
    }

    printf("merge the sorted data\n");
    for (k = 0; k < 10; k++)
    {
        printf("%d\n", z[k]);
    }
}
/*enter the size of array5
enter the data of 1 array1
3
5
7
9
enter the size2 of array5
enter the data of 2 array0
2
4
6
8
display the inserted data of 1 array
1
3
5
7
9
display the inserted data of 2 array
0
2
4
6
8
merge the sorted data
0
1
2
3
4
5
6
7
8
9
PS C:\Users\DELL\OneDrive\Desktop\dsa in c>*/