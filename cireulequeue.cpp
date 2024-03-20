#include <iostream>
using namespace std;
int r = 0;
int f = 0;
int arr[10];
void inset(int a)
{
    if (r == -1 && f == -1)
    {
      r++;
      f++;
        arr[r] = a;
    }
    else if ((r+1)%10>= 10 - 1)
    {
        cout << "arr is full";
    }
    else
    {
        r = (r + 1) % 10;
        arr[r]=a;
    }
}
    void DeleteElemenT()

    {
        if (r == f)
        {
           r =-1;
            f = -1;
        }
        else if (f < 0)
        {
            cout << "arr is emty";
        }
        else
        {
            f = (f + 1) % 10;
        }
    }

    void dispaly()
    {
        if (f < 0)
        {
            cout << "arr is a full";
        }
        else
        {
            for (int i = f; i <= r; (i+1)%10)
            {
                cout << arr[i];
            }
        }
    }
    int main()
    {
        int n;
        do
        {
            cout << "1.inset \n 2.delete \n 3.dispaly";
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
                DeleteElemenT();
                break;
            case 3:
                dispaly();
                break;
            case 4:
                cout << "thank";
                break;
            }
        } while (n != 4);
    }