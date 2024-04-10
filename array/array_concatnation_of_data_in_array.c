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
enter the data of 1 array2
3
8
5
1
enter the size2 of array5
enter the data of 2 array0
5
2
5
1
display the inserted data of 1 array
2
3
8
5
1
display the inserted data of 2 array
0
5
2
5
1
after the concatnation2
3
8
5
1
0
5
2
5
1
PS C:\Users\DELL\OneDrive\Desktop\dsa_in_c\array>*/