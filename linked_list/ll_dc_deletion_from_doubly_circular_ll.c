#include<stdio.h>
#include<stdlib.h>
struct node{
 int data;
 struct node *next;
 struct node *prev;
}*head,*tail;

void createdll()
{
    struct node *newnode;
    head=0;
    int choice=1;
    do{
      newnode=(struct node*)malloc(sizeof(struct node));
      printf("enter the data");
      scanf("%d",&newnode->data);
      if(head==0)
      {
        head=tail=newnode;
        head->next=head;
        head->prev=head;
      }
      else{
        tail->next=newnode;
        newnode->prev=tail;
        newnode->next=head;
        head->prev=newnode;
        tail=newnode;
      }
      printf("do want you to continue 0 1");
      scanf("%d",&choice);
    }while(choice==1);
}
void display()
{
    struct node *temp;
    temp=head;
    printf("display the inserted data\n");
    if(head==0)
    {
        printf("list is empty");
    }
    else{
        while(temp!=tail)
        {
            printf("%d\n",temp->data);
            temp=temp->next;
        }
        printf("%d\n",temp->data);
    }
}
void deleteatbeg()
{
    struct node *temp;
    temp=head;
    if(head==0)
    {
        printf("list is empty");
    }
    else if (head->next==head)
    {
        head=tail=0;
        free(temp);
    }
    else{
        head=head->next;
        head->prev=tail;
        tail->next=head;
        free(temp);
    }
}

void deleteatend()
{
    struct node *temp;
    temp=tail;
    if(head==0)
    {
        printf("list is empty");
    }
    else if (head->next==head)
    {
        head=tail=0;
        free(temp);
    }
    else{
        tail=tail->prev;
        tail->next=head;
        head->prev=tail;
        free(temp);
    }
}
void deleteatpos()
{
    struct node *temp;
    int pos,i=1,l;
    temp=head;
    printf("enter the position");
    scanf("%d",&pos);
    if(pos<1||pos>4)
    {
        printf("invalid position");
    }
    else if (pos==1)
    {
        deleteatbeg();
    }
    else{
        while(i<pos)
        {
            temp=temp->next;
            i++;
        }
        temp->prev->next=temp->next;
        temp->next->prev=temp->prev;
        if(temp->next==head)
        {
            tail=temp->prev;
            free(temp);
        }
        else{
            free(temp);
        }
    }
}
main()
{
    createdll();
    int choice=1;
    display();
    printf("press 1 for delete data in begning\n press 2 for delete data in end\n press 3 for delete data in the specific position\n");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:deleteatbeg();
          display();
        break;
  case 2:deleteatend();
          display();
        break;
   case 3:deleteatpos();
          display();
        break;
    default:printf("error");
        break;
    }
}