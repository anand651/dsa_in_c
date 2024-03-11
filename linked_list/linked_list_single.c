/*#include<stdio.h>
#include<stdlib.h>

struct node{
 int x;
 struct node *next;
}*start,*ptr;

void main()
{
    ptr=(struct node *)malloc(sizeof(struct node));
    printf("enter the number");
    scanf("%d",&(ptr->x));
    ptr->next=NULL;
    start=ptr;
    printf("%d",(start->x));
}*/

#include<stdio.h>
#include<stdlib.h>

struct node{
 int x;
 struct node *next;
}*start,*ptr;

void main()
{
    ptr=(struct node *)malloc(sizeof(struct node));
    printf("enter the number");
    scanf("%d",&(ptr->x));
    ptr->next=NULL;
    start=ptr;
    for(int i=1;i<=4;i++)
    {
          ptr->next=(struct node *)malloc(sizeof(struct node));
          scanf("%d",&(ptr->next->x));
          ptr->next->next=NULL;
          ptr=ptr->next;
    }
    ptr=start;
    while(ptr !=NULL)
    {
        printf("%d",(ptr->x));
        ptr=ptr->next;
    }
}