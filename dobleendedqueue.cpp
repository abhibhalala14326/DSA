#include <iostream>
using namespace std;
int r = -1, f = -1;
int arr[10];
void inset(int a)
{
    if (r == -1 && f == -1)
    {
        r++;
        f++;
        arr[r] = a;
    }
    else if (r >= 10 - 1)
    {
        cout << "arr is a full";
    }

    else
    {
        r++;
        arr[r] = a;
    }
}
void deletreEnd()
{

    if (f < 0)

    {
        cout << "arr is emty";
    }
    else if (f == r)
    {
        f = -1;
        r = -1;
    }
    else
    {
        f++;
    }
}
void display()
{

    if (f < 0)
    {
        cout << "emty";
    }
    else
    {
        for (int i = f; i <= r; i++)
        {
            cout << " " << arr[i];
        }
        cout << "\t";
    }
    cout << endl;
}
void finset(int a)

{
    if (r == -1 && f == -1)
    {
        r = 0;
        f = 0;
        arr[r] = a;
    }
    else if (r >= 10 - 1)
    {
        cout << "arr is a full";
    }

    else
    {
        for (int i = r + 1; i >= f; i--)
        {
            arr[i] = arr[i - 1];
        }
        r++;
        arr[f] = a;
    }
}
void lDelete()
{
    if (f < 0)

    {
        cout << "arr is emty";
    }
    else if (f == r)
    {
        f = -1;
        r = -1;
    }
    else
    {
        r--;
    }
}
int main()
{
    int n;
    do
    {
        cout
            << "1.inset \n 2.delete \n 3.display \n 4.lastdelete \n 5.1st inset \n 6.exit " << endl;
        cin >> n;
        switch (n)
        {
        case 1:
            int no;
            cout << "enter the inset element";
            cin >> no;
            cout << "inset the elemet " << endl;
            inset(no);
            break;

        case 2:
            cout << "delete the 1st element" << endl;
            deletreEnd();
            break;

        case 3:
            display();

            break;

        case 4:
            lDelete();
            break;

        case 5:
            int d;
            cout << "enter the  1st elemet ";
            cin >> d;
            finset(d);
            break;

        case 6:
            cout << "tq";

            break;
        }

    } while (n != 6);
}