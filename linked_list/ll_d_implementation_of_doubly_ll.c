#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *next;
struct node *prev;
};
struct node *head=NULL,*newnode,*temp;
void create()
{
    int choice;
    do{
   newnode= (struct node*)malloc(sizeof(struct node));
   printf("enter data");
   scanf("%d",&newnode->data);
   newnode->prev=0;
   newnode->next=0;
   if(head==0)
   {
    head=temp=newnode;
   }
   else{
    temp->next=newnode;
    newnode->prev=temp;
    temp=newnode;
   }
   printf("do you want to continue 0,1");
   scanf("%d",&choice);
    }while(choice==1);
}

void display(){
    //struct node *temp;
    temp=head;
    while(temp!=0)
    {
        printf("%d",temp->data);
        temp= temp->next;
    }
}

main()
{
    create();
    display();
}


