#include<stdio.h>
#define N 5

int main()
{
    int x[N],i,j,t;
    printf("%d is the size an array\n",N);
    printf("enter the number");
    for(i=0;i<N;i++)
    {
        scanf("%d",&x[i]);
    }
    for(i=1;i<N;i++)
    {
        t=x[i];
        for(j=i-1;j>=0 && x[j]>t;j--)
        {
            x[j+1]=x[j];
        }
        x[j+1]=t;
    }
    printf("insertion sorted data");
    for(i=0;i<N;i++)
    {
        printf("%d",x[i]);
    }
    return 0;
}
/*5 is the size an array
enter the number15    
16
6
8
5
insertion sorted data5681516
PS C:\Users\DELL\OneDrive\Desktop\dsa in c\sorting>*/