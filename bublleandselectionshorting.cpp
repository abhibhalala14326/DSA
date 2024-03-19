#include <iostream>
using namespace std;
int size;
int arr[1000];
void bubble()
{
    cout << "enmter the arr size";
    cin >> size;
cout<<"UN SHOT ARER"<<"\n";

    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % 100 + 1;
        cout << " " << arr[i];
    }
    cout<<"\n";
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size-1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    cout<<"BUBBLE SHOT ARER"<<"\n";
    for (int i = 0; i < size; i++)
    {
        cout<<"  " << arr[i];
    }
}
void selection()
{
    cout << "enmter the arr size";
    cin >> size;
cout<<"UN SHOT ARER"<<"\n";

    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % 100 + 1;
        cout << " " << arr[i];
    }
    cout<<"\n";
    for (int i = 0; i < size; i++)
    {
        for (int j = i+1; j < size; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    cout<<"selection SHOT ARER"<<"\n";
    for (int i = 0; i< size; i++)
    {
        cout<<"  " << arr[i];
    }
}
int main()
{
   // bubble();
   selection();
   
}