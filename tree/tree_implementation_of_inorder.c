#include<stdio.h>
#include<stdlib.h>
void main()
{
    struct node *root;
    printf("pre-order");
    preorder(root);
}
void preorder(struct node *root)
{
    if(root==0)
    {
        return ;
    }
    printf("%d",root->data);
    preorder(root->left);
}