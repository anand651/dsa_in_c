#include <stdio.h>
main()
{
    int x[10], y[10], size1, size2, i, j, a;
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

    for (j = 0; j < size2; j++)
    {
        x[size1 + j] = y[j];
    }

    printf("after the concatnation");
    for (i = 0; i < 10; i++)
    {
        printf("%d\n", x[i]);
    }
}
/*enter the size of array5
enter the data5
1
2
9
4
display the inserted data  
5
1
2
9
4
sorting of the array       
display the sorting of data
1
2
4
5
9
PS C:\Users\DELL\OneDrive\Desktop\dsa in c>*/