#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *Next;
    struct node *prev;
};
struct node *head = NULL;

void inset(int a)
{
    struct node *ptr = head;
    struct node prev;
    ;
    struct node *temp = malloc(sizeof(struct node));
    temp->data = a;
    temp->Next = NULL;
    temp->prev = NULL;
    if (head == NULL)
    {
        head = temp;

        return;
    }
    else
    {
        
        ptr->Next = temp;

        temp->prev = ptr;

        temp->Next = head;
        head->prev = temp;
        return;
    }
}

void inset_1st(int a)
{
    struct node *ptr = head;
    struct node *prev;
    struct node *p;
    struct node *temp = malloc(sizeof(struct node));
    temp->data = a;
    temp->Next = head;
    temp->prev = NULL;
    if (head == NULL)
    {
        head = temp;
        temp->Next = head;
    }
    else
    {
        while (ptr->Next != head)
        {
            p = ptr;
            ptr = ptr->Next;
        }
        ptr->Next = temp;
       temp->Next=head;
        head->prev = temp;
       temp->prev=ptr;
    }
}

void Delete()
{
    struct node *ptr = head;
    struct node *p;
    struct node *prev;
    if (head == NULL)
    {
        printf("list empty...");
        return;
    }

    else if (head->Next == NULL)
    {
        prev=NULL;
        head = NULL;
        free(ptr);
        return;
    }

    while (ptr->Next != head)
    {
        p = ptr;
        ptr = ptr->Next;
    }
    p->Next = head;

    free(ptr);
    


}

void Delete1st()
{
    struct node *ptr = head;
    struct node *p = head;

    if (head == NULL)
    {
        printf("list empty...");
    }

    else
    {
        while (ptr->Next != head)
        {

            ptr = ptr->Next;
        }
        head = head->Next;
        ptr->Next = head;
        free(p);
        return;
    }
}

void mid_insert(int a, int pos)
{
    struct node *ptr = head;
    struct node *p;
    struct node *temp = malloc(sizeof(struct node));
    temp->data = a;
    // temp->Next = NULL;
    while (ptr->data != pos)
    {
        p = ptr;
        ptr = ptr->Next;
    }
    p->Next = temp;
    temp->Next = ptr;
}

void mid_Delete(int pos)
{
    struct node *ptr = head;
    struct node *p;

    while (ptr->data != pos)
    {
        p = ptr;
        ptr = ptr->Next;
    }
    p->Next = ptr->Next;
    free(ptr);
}

void display()
{
    struct node *ptr = head;
    if (head == NULL)
    {
        printf("list ...");
    }

    else
    {

        while (ptr->Next != head)
        {
            printf("%d ", ptr->data);
            ptr = ptr->Next;
        }
        printf("%d ", ptr->data);
    }
    printf("\n");
}

int main()
{
    int n;
    int a, pos;
    do
    {
        printf("\n\n1.inset \n 3.delete \n 2.dispaly  \n 4.1st insert \n 5.1st delete  \n 6.mid inset \n 7.mid delete\n");

        printf("select your option ");
        scanf("%d", &a);
        switch (a)
        {
        case 1:
            printf("enter the inset a number :");
            scanf("%d", &n);
            inset(n);
            break;
        case 2:

            display();
            break;
        case 3:
            Delete();
            break;
        case 4:
            printf("enter the inset 1st a number :");
            scanf("%d", &n);
            inset_1st(n);

            break;
        case 5:
            Delete1st();
            break;
        case 6:
            display();
            printf("mid pos is add in node :");
            scanf("%d", &pos);

            printf("enter the inset 1st a number :");
            scanf("%d", &n);
            mid_insert(n, pos);
            break;

        case 7:
            display();
            printf("mid pos is add in node :");
            scanf("%d", &pos);
            mid_Delete(pos);
            break;
        default:
            break;
        }
    } while (a != 8);
}