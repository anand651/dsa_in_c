#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *left,*right;
};
struct node *create()
{  
    int x;
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("enter the data -1 for no node\n");
    scanf("%d",&x);
    if(x==-1)
    {
        return;
    }
    newnode->data=x;
    printf("enter left child %d\n",x);
    newnode->left = create();
    printf("enter right child %d\n",x);
    newnode->right = create();
    return newnode;
}
void main()
{
    struct node *root;
    root =0;
    root = create();
}