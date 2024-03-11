#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct node{
    int x;
    struct node* next;
}*start=NULL,*ptr;
void create()
{
    char ch='Y';
    ptr=(struct node*)malloc(sizeof(struct node));
    scanf("%d",&(ptr->x));
    ptr->next=NULL;
    start=ptr;
    while(ch=='y'||ch=='Y')
    {
        printf("\n do you  want create more node");
        ch=getche();
        if(ch=='y'||ch=='Y')
        {
            ptr->next=(struct node*)malloc(sizeof(struct node));
            scanf("%d",&(ptr->next->x));
            ptr->next->next=NULL;
            ptr=ptr->next;
        }
    }
}
void print()
{
    ptr=start;
    while(ptr !=NULL)
    {
        printf("\n %d",ptr->x);
        ptr=ptr->next;
    }
}
int main()
{
    create();
    print();
}