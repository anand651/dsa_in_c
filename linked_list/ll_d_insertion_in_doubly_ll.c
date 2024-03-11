#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
    struct node *prev;
};
struct node *head=NULL,*newnode,*tail,*temp;
int count=0;

void createdll(){
    int choice;
    do
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("enter the data");
        scanf("%d",&newnode->data);
        newnode->prev=0;
        newnode->next=0;
        if(head==0)
        {
            head=tail=newnode;
        }else{
            tail->next=newnode;
            newnode->prev=tail;
            tail=newnode;
        }
         printf("do you want to continue 0,1");
         scanf("%d",&choice);
    }while(choice==1);
}

void display(){
    temp=head;
    while(temp!=0)
    {
        printf("%d",temp->data);
        temp= temp->next;
        count++;
    }
    printf("\ncount=%d",count);
}

void insertatbeg()
{
   newnode = (struct node*)malloc(sizeof(struct node));
   printf("enter the data");
     scanf("%d",&newnode->data);
        newnode->prev=0;
        newnode->next=0;
       head->prev=newnode;
       newnode->next=head;
       head=newnode;
}

void insertatend(){
    newnode = (struct node*)malloc(sizeof(struct node));
   printf("enter the data");
     scanf("%d",&newnode->data);
        newnode->prev=0;
        newnode->next=0;
        tail->next=newnode;
       newnode->prev=tail;
       tail=newnode;
}
void insertatpos()
{
    int pos,i=1;
    printf("enter the position");
    scanf("%d",&pos);
    if(pos>count)
    {
        printf("invalid position");
    }
     else if(pos==1)
     {
        insertatbeg();
     }
     else
     {
        temp=head;
        newnode = (struct node*)malloc(sizeof(struct node));
         printf("enter the data");
         scanf("%d",&newnode->data);
         while(i<pos-1)
         {
            temp=temp->next;
            i++;
         }
         newnode->prev=temp;
         newnode->next=temp->next;
         temp->next=newnode;
         newnode->next->prev=newnode;
     }
}

main()
{
    createdll();
    int choice=1;
    display();
     printf("\npress 1 for insert data in begning\n press 2 for inser data in end\n press 3 for insert data in the specific position\n");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:insertatbeg();
          display();
        break;
        case 2:insertatend();
          display();
        break;
       case 3:insertatpos();
        display();
        break;
    default:
    printf("error");
        break;
    }
}   