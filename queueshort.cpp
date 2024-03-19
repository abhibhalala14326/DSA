#include <iostream>
using namespace std;
int r = 0, f = 0;
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
        for (int i = f + 1; i <= r; i++)
        {
            cout << " " << arr[i];
        }
        cout<<"\t";
    }
    cout<<endl;
}

int main()
{
    int n;
do{
    cout
        << "1.inset \n 2.delete \n 3.display \n 4.exit" << endl;
    cin >> n;
    switch (n)
    {
    case 1:
        int no;
        cout << "enter the inset element";
        cin >> no;
        cout<<"inset the elemet "<<endl;
        inset(no);
        break;
    case 2:
    cout<<"delete the 1st element"<<endl;
        deletreEnd();
        break;
    case 3:
        display();
        break;
        case 4:
        cout << "thank";
        break;
    }}while (n!=4);
    
}