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
    else if (r >= 10 - 1)
    {
        cout << "arr is full";
    }
    else
    {
        r = (r + 1) % 10;
    }
    void DeleteElemenT()
    {
        if(r==f)
        {
            r=-1;
            f=-1;
        }else if(f<0)
        {
            cout<<"arr is emty";
        }else 
        {
        f++;

        }
    }
}

void dispaly()
{
    if(r<0)
    {
        cout<<"arr is a full";
    }else
    {
        
    }
}
int main()
{

cout<<"1.inset \n 2.delete \n 3.dispaly"

}