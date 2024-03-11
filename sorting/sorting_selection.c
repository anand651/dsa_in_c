#include<stdio.h>
#define N 5
int main()
{
    int x[N],i,j,t;
    printf("%d is the size of an array\n",N);
    printf("enter the number");
    for(i=0;i<N;i++)
    {
        scanf("%d",&x[i]);
    }
    for(i=0;i<N-1;i++)
    {
        for(j=i+1;j<N;j++)
        {
            if(x[i]>x[j])
            {
                t=x[i];
                x[i]=x[j];
                x[j]=t;
            }
        }
    }
    printf("selection sorted data\n");
    for(i=0;i<N;i++)
    {
        printf("%d",x[i]);
    }
    return 0;
}
/*5 is the size of an array
enter the number16
15
6
8 
5
selection sorted data
5681516
PS C:\Users\DELL\OneDrive\Desktop\dsa in c\sorting>*/