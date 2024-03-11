#include<stdio.h>
#include<stdlib.h>
struct node
{
   int data;
   struct node *next;
};
struct node *head=NULL,*newnode,*temp;

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
printf("display the inserted data\n");
int count=0;
 temp=head;
while(temp!=0)
{
printf("%d\n",temp->data);
temp=temp->next;
count++;
}
printf("count=%d\n",count);
}

void deletefrombeg()
{
    if(head==0){
        printf("list is empty\n");
    }else if(head->next==0){
        temp=head;
        head=0;
        free(temp);
    }else{
         temp=head;
         head=head->next;
         free(temp);
         }
}

void deletefromend(){
    struct node *prenode;
    temp=head;
    while(temp->next!=0){
        prenode=temp;
        temp=temp->next;
    }
    if(temp==head)
    {
        head=0;
    }
    else{
        prenode->next=0;
    }
    free(temp);
}

 void deletefrompos(){
    struct node *nextnode;
    int pos,i=1;
    temp=head;
    printf("enter position");
    scanf("%d",&pos);
    while(i<pos-1)
    {
        temp=temp->next;
        i++;
    }
    nextnode=temp->next;
    temp->next=nextnode->next;
    free(nextnode);
}

 main(){
    create();
    int choice=1;
    display();
    printf("press 1 for delete data in begning\n press 2 for delete data in end\n press 3 for delete data in the specific position\n");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:deletefrombeg();
          display();
        break;
    case 2:deletefromend();
          display();
        break;
        case 3:deletefrompos();
          display();
        break;
    default:
    printf("error");
        break;
    }
}
/*enter the data5
do you want to continue 0,11
enter the data6
do you want to continue 0,11
enter the data7
do you want to continue 0,11
enter the data8
do you want to continue 0,10
display the inserted data
5
6
7
8
count=4
press 1 for delete data in begning
 press 2 for delete data in end
 press 3 for delete data in the specific position
1
display the inserted data
6
7
8
count=3
PS C:\Users\DELL\OneDrive\Desktop\dsa in c\linked_list>*/