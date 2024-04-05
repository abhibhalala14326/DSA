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
    struct node *prev;
    struct node *temp = malloc(sizeof(struct node));
    temp->data = a;
    temp->Next = NULL;
    if (head == NULL)
    {
        head = NULL;
        prev = NULL;
        head = temp;
        return;
    }
    else
    {
        while (ptr->Next != NULL)
        {
            ptr = ptr->Next;
        }
        ptr->Next = temp;
        temp->prev = ptr;
        return;
    }
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
        while (ptr != NULL)
        {
            printf("  %d", ptr->data);
            ptr = ptr->Next;
        }
    }
    printf("\n");
}
void Delete()
{
    struct node *ptr = head;
    struct node *prev;

    struct node *p;
    struct node *pp;
    if (head == NULL)
    {
        printf("list empty...");
    }

    else if (head->Next == NULL)
    {
        head = NULL;
        free(ptr);
        return;
    }

    while (ptr->Next != NULL)
    {
        p = ptr;
        ptr = ptr->Next;
        pp = p;
    }
    p->Next = NULL;
    free(ptr);
    pp->prev = p;
    return;
}
void inset_1st(int a)
{
    // struct node *ptr = head;
    struct node *temp = malloc(sizeof(struct node));
    temp->data = a;
    temp->Next = NULL;
    if (head == NULL)
    {
        head=NULL;
        head = temp;
    }
    else
    {

        temp->Next = head;
        head = temp;
        head->prev=temp;
    }
}
void Deletew()
{
    struct node *ptr = head;

    if (head == NULL)
    {
        printf("list empty...");
    }

    else
    {
        head = head->Next;
        free(ptr);
                        
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
    struct node *pp;

    while (ptr->data != pos)
    {
        p = ptr;
        ptr = ptr->Next;
    }
    p->Next = ptr->Next;
    free(ptr);
    pp=ptr->Next;
    pp->prev=p;
}
int main()
{
    int n;
    int a, pos;
    do
    {

        printf("\n\n1.inset \n 2.dispaly \n 3.delete \n 4.1st insert \n 5.1st delete \n 6.mid inset \n 7.mid delete \n");

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
            Deletew();
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