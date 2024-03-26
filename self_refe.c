#include <stdio.h>
struct node
{
   int data;
   char ch;
   struct node *ptr;
};
int main()
{

   struct node a, b, c, d;

   a.data = 100;
   a.ch = 'a';
   a.ptr = NULL;

   b.data = 200;
   b.ch = 'b';
   b.ptr = NULL;

   c.data = 300;
   c.ch = 'c';
   c.ptr = NULL;

   d.data = 400;
   d.ch = 'd';
   d.ptr = NULL;

   a.ptr = &d;
   b.ptr = &c;
   c.ptr = &b;
   d.ptr = &a;

   printf("enter the a data : ");
   scanf("%d", &a.data);
   printf("enter the a ch : ");
   scanf("%s", &a.ch);

   printf("enter the b data : ");
   scanf("%d", &b.data);
   printf("enter the b ch : ");
   scanf("%s", &b.ch);

   printf("enter the c data : ");
   scanf("%d", &c.data);
   printf("enter the c ch : ");
   scanf("%s", &c.ch);

   printf("enter the d data : ");
   scanf("%d", &d.data);
   printf("enter the d ch : ");
   scanf("%s", &d.ch);

   printf("a: data %d \t char : %c\n ", a.ptr->data, a.ptr->ch);
   printf("b: data %d \t char : %c\n ", b.ptr->data, b.ptr->ch);
   printf("c: data %d \t char : %c\n ", c.ptr->data, c.ptr->ch);
   printf("d: data %d \t char : %c \n", d.ptr->data, d.ptr->ch);
}
