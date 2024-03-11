#include<stdio.h>
#include<stdlib.h>
struct node
{
   int data;
   struct node *next;
};
struct node *head=NULL,*newnode,*temp;
void createcll()
{
int choice;
do
{
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("enter the data");
    scanf("%d",&newnode->data);
    newnode->next=0;
    if(head==0)
    {
        head=temp=newnode;
    }
    else{
        temp->next=newnode;
        temp=newnode;
   }
   temp->next=head;
    printf("do you want to continue 0,1");
    scanf("%d",&choice);
}while(choice==1);
}

void display(){
printf("display the inserted data\n");
if(head==0)
{
    printf("list is empty");
}
else{
 temp=head;
while(temp->next!=head)
{
printf("%d\n",temp->data);
temp=temp->next;
}
printf("%d",temp->data);
}
}
main()
{
    createcll();
    display();
}