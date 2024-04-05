#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *Next;
};
struct node *head = NULL;
void inset(int a)
{
    struct node *ptr = head;
    struct node *temp = malloc(sizeof(struct node));
    temp->data = a;
    temp->Next = NULL;
    if (head == NULL)
    {
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
    struct node *p;
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
    }
    p->Next = NULL;
    free(ptr);
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
        head = temp;
    }
    else
    {

        temp->Next = head;
        head = temp;
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
        head = head->Next  ;
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
        ptr=ptr->Next;
          
    }
         p->Next = temp;
        temp->Next = ptr;
   
   
}


void mid_Delete(int pos)
{
    struct  node* ptr=head;
    struct  node* p;


      while (ptr->data != pos)
    {
        p = ptr;
        ptr=ptr->Next;
          
    }
    p->Next=ptr->Next;
    free(ptr);


}
int main()
{
    int n;
    int a, pos;
    printf("\n\n1.inset \n 2.dispaly \n 3.delete \n 4.1st insert \n 5.mid inset \n");
    do
    {

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
            Deletew();
            break;
        case 4:
            printf("enter the inset 1st a number :");
            scanf("%d", &n);
            inset_1st(n);

            break;
        case 5:
            display();
            printf("mid pos is add in node :");
            scanf("%d", &pos);

            printf("enter the inset 1st a number :");
            scanf("%d", &n);
            mid_insert(n, pos);
            break;

            case 6:
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