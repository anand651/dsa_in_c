#include <stdio.h>
#include <stdlib.h>
struct node
{
  int data;
  struct node *next;
  struct node *prev;
} *head, *tail;

void createdll()
{
  struct node *newnode;
  head = 0;
  int choice = 1;
  do
  {
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("enter the data");
    scanf("%d", &newnode->data);
    if (head == 0)
    {
      head = tail = newnode;
      head->next = head;
      head->prev = head;
    }
    else
    {
      tail->next = newnode;
      newnode->prev = tail;
      newnode->next = head;
      head->prev = newnode;
      tail = newnode;
    }
    printf("do want you to continue 0 1");
    scanf("%d", &choice);
  } while (choice == 1);
}
void display()
{
  struct node *temp;
  temp = head;
  if (head == 0)
  {
    printf("list is empty");
  }
  else
  {
    while (temp != tail)
    {
      printf("%d\n", temp->data);
      temp = temp->next;
    }
    printf("%d\n", temp->data);
  }
}

main()
{
  createdll();
  display();
}
/*enter the data1
do want you to continue 0 11
enter the data2
do want you to continue 0 11
enter the data3
do want you to continue 0 10
1
2
3
PS C:\Users\DELL\OneDrive\Desktop\dsa_in_c\linked_list>*/