#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head=NULL,*newnode,*temp;
int pos,i=1,count=0;
void create()
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
    printf("do you want to continue 0,1");
    scanf("%d",&choice);
}while(choice==1);
}

void display(){
    int count=0;
printf("display the inserted data\n");
 temp=head;
while(temp!=0)
{
printf("%d\n",temp->data);
temp=temp->next;
count++;
}
printf("count=%d\n",count);
}

void reverse(){
    struct node *prenode,*currentnode,*nextnode;
    prenode=0;
    currentnode = nextnode = head;
    while(nextnode!=0)
    {
        nextnode=nextnode->next;
        currentnode->next=prenode;
        prenode= currentnode;
        currentnode=nextnode;
    }
    head=prenode;
}

main(){
    create();
    int choice=1;
    display();
    printf("press 1 for reverse the data\n");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:reverse();
          display();
        break;
        default:
    printf("error");
        break;
    }
}