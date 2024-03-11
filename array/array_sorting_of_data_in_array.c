#include <stdio.h>
main()
{
  int x[5], size, i, j, a;
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
  printf("sorting of the array\n");
  for (i = 1; i < size; i++)
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
  printf("display the sorting of data\n");
  for (i = 0; i < size; i++)
    printf("%d\n", x[i]);
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