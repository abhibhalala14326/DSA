#include <iostream>
using namespace std;
int size;
int arr[10];
int top = -1;
void inset(int a)
{

    if (top >= 10 - 1)
    {
        cout << "arr is full";
    }
    else
    {
        top++;
        arr[top] = a;
    }
}
void Delete()
{
    if (top < 0)
    {
        cout << "arr id emty";
    }
    else
    {
        top--;
    }
}
void display()
{
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    for (int i = 0; i <= top; i++)
    {
        cout << " "
             << arr[i];
    }
    cout << endl;
}
int main()
{
    int no;
    cout << "1.inset \n 2.delete \n 3.display \n 4.exit";
    do
    {

        cout << "you`r option :";
        cin >> no;

        switch (no)
        {

        case 1:
            int a;

            cout << "ente the inset  number :";
            cin >> a;

            inset(a);

            break;

        case 2:

            Delete();

            break;
        case 3:
            display();
            break;

        case 4:
            cout << "thank";
            break;
        default:
            break;
        }
    } while (no != 4);
}