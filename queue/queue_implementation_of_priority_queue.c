#include <stdio.h>
#include <stdlib.h>
struct pqueue
{
    int data;
    int pr;
    struct pqueue *next;
} *front;
void insert(int, int);
void delete();
void display();

main()
{
    insert(50, 8);
    insert(75, 4);
    insert(60, 2);
    insert(100, 10);
    insert(15, 6);
    display();
    delete ();
    display();
}

void insert(int n, int pri)
{
    struct pqueue *p, *t;
    p = (struct pqueue *)malloc(sizeof(struct pqueue));
    p->data = n;
    p->pr = pri;
    p->next = NULL;

    if (front == NULL || pri > front->pr)
    {
        p->next = front;
        front = p;
    }
    else
    {
        t = front;
        while (t->next != NULL && t->next->pr > pri)
        {
            t = t->next;
        }
        p->next = t->next;
        t->next = p;
    }
}

void delete()
{
    struct pqueue *temp;
    if (front == NULL)
        printf("pqueue is empty");
    else
    {
        temp = front;
        front = front->next;
        printf("delete data %d\n", temp->data);
        printf("delete priority %d\n", temp->pr);
        free(temp);
    }
}

void display()
{
    struct pqueue *t;
    if (front == NULL)
        printf("pqueue is empty");
    else
    {
        t = front;
        while (t != NULL)
        {
            printf("%d \t %d\n", t->data, t->pr);
            t = t->next;
        }
    }
}

/*100      10
50       8
15       6
75       4
60       2
delete data 100
delete priority 10
50       8
15       6
75       4
60       2
PS C:\Users\DELL\OneDrive\Desktop\DSA>*/