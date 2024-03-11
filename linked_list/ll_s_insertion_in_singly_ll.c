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

void insertinbeg(){
newnode=(struct node*)malloc(sizeof(struct node));
printf("you can insert");
scanf("%d",&newnode->data);
newnode->next=head;
head=newnode;
}

void insertinpos(){
newnode=(struct node*)malloc(sizeof(struct node));
printf("enter the position");
scanf("%d",&pos);
if(pos>count)
{
printf("invalid position");
}
else{
    temp=head;
    while(i<pos)
    {
        temp=temp->next;
        i++;
    }
    printf("enter the data");
    scanf("%d",&newnode->data);
    newnode->next=temp->next;
    temp->next=newnode;
}
}

void insertinend(){
newnode= (struct node*)malloc(sizeof(struct node));
printf("enter the data you want to insert");
scanf("%d",&newnode->data);
newnode->next=0;
temp=head;
while(temp->next!=0)
{
    temp=temp->next;
}
temp->next=newnode;
}

main(){
    create();
    int choice=1;
    display();
    printf("press 1 for insert data in begning\n press 2 for inser data in end\n press 3 for insert data in the specific position\n");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:insertinbeg();
          display();
        break;
        case 2:insertinend();
          display();
        break;
       case 3:insertinpos();
        display();
        break;
    default:
    printf("error");
        break;
    }
}
/*enter the data4
do you want to continue 0,11
enter the data5
do you want to continue 0,11
enter the data6
do you want to continue 0,11
enter the data7
do you want to continue 0,10
display the inserted data
4
5
6
7
count=4
press 1 for insert data in begning
 press 2 for inser data in end
 press 3 for insert data in the specific position
1
you can insert2
display the inserted data
2
4
5
6
7
count=5
PS C:\Users\DELL\OneDrive\Desktop\dsa in c\linked_list>*/