#include<stdio.h>
#include<stdlib.h>

struct bst{
struct bst *left;
int data;
struct bst *right;
};

struct bst* insert(struct bst*,int);
void preorder(struct bst*);
void inorder(struct bst*);
void postorder(struct bst*);
void delete_bst(struct bst*,int);

main()
{
struct bst *root;
root = NULL;
root=insert(root,50);
     insert(root,60);
     insert(root,22);
     insert(root,38);
     insert(root,58);
     insert(root,34);
     preorder(root);
     printf("\n");
     inorder(root);
     printf("\n");
     postorder(root);
     printf("\n");
     delete_bst(root,60);
     inorder(root);
     printf("\n");
     delete_bst(root,100);
     inorder(root);
}

struct bst* insert(struct bst *r,int x)
{
    struct bst *p,*par;
    p=(struct bst*)malloc(sizeof(struct bst));
    p->left=NULL;
    p->data= x;
    p->right=NULL;

    if(r==NULL)
         r=p;
    else{
        while(r!=NULL)
        {
            par=r;
            if(x < r->data)
                  r=r->left;
            else
                 r=r->right;      
        }
        if(x < par->data)
            par->left=p;
        else
            par->right=p;
    }
    return r;
}

void preorder(struct bst *r)
{
   if(r != NULL)
   {
      printf("%d \t",r->data);
      preorder(r->left);
      preorder(r->right);
   }
}

void inorder(struct bst *r)
{
     if(r != NULL)
   {
      inorder(r->left);
      printf("%d \t",r->data);
      inorder(r->right);
   }
}

void postorder(struct bst *r)
{
   if(r != NULL)
   {
      postorder(r->left);
      postorder(r->right);
      printf("%d \t",r->data);
   }
}

void delete_bst(struct bst *r,int item)
{
    struct bst *curr,*par,*temp,*cur1,*par1;
    if(r==NULL)
    {
        printf("tree is empty");
        return;
    }
    curr=r;
    while(curr !=NULL && item !=curr->data)
    {
        par=curr;
        if(item < curr->data)
            curr = curr->left;
        else
            curr=curr->right;
    }
//case 1
    if(curr==NULL)
    {
        printf("item to be delete not exist");
        return;
    }
//case 2 left node
    if(curr->left == NULL && curr->right==NULL)
    {
        temp=curr;
        if(item < par->data)
           par ->left=NULL;
        else
            par->right=NULL;
        free(temp);    
    }
//case 4 both child
    else if(curr->left !=NULL && curr->right !=NULL)
    {
        temp=curr;
        cur1=curr->right;
        if(cur1 ->left == NULL)
        {
            cur1->left=curr->left;
            if(r<par->data)
               par->left=cur1;
            else
               par->right=cur1;
            free(temp);
        }
        else{
            while(cur1 ->left !=NULL)
            {
                par1=cur1;
                cur1=cur1->left;
            }
          if(cur1->right ==NULL)
             par1 ->left =NULL;
           else
            par1->left = cur1 ->right;

        cur1->left = curr->left;
        cur1->right= curr->right;
        if(r<par->data)
           par->left=cur1;
        else
           par->right=cur1;
        
        free(temp);        
        }
    }

//case 3 (1 child)
    else{
        if(curr->right ==NULL)
        {
            temp=curr;
            if(item < par->data)
               par->left=curr->left;
            else
               par->right=curr->left;

        free(temp);
        }
        else
        {
            temp=curr;
            if(item < par->data)
                par->left = curr->right ;
            else
               par->right = curr->right;
        free(temp);
        }
    }
}