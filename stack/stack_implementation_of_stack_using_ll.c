#include<stdlib.h>
#include<stdio.h>
struct node{
    int data;
    struct node *link;
};
struct node *top = 0;
void push(int x)
{
    struct node *newnode;
    newnode = (struct node*)malloc(sizeof(struct node));
    newnode ->data=x;
    newnode ->link = top;
    top=newnode;
}
void peek()
{
    if(top==0)
    {
        printf("list is empty");
    }
    else{
        printf("top element is %d\n",top->data);
    }
}
void display()
{
    struct node *temp;
    temp=top;
    if(top==0)
    {
        printf("list is empty");
    }
    else{
        while(temp!=0)
        {
            printf("%d\n",temp->data);
            temp=temp->link;
        }
    }
}
void pop()
{
    struct node *temp;
    temp=top;
    if(top==0)
    {
        printf("list is empty");
    }
    else {
        printf("%d\n",top->data);
        top=top->link;
        free(temp);
    }
}

void main()
{
    push(2);
    push(3);
    push(10);
    display();
    peek();
    pop();
    peek();
    display();
}

/*10
3
2
top element is 10
10
top element is 3
3
2
PS C:\Users\DELL\OneDrive\Desktop\DSA> */