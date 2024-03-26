#include <iostream>
using namespace std;

int size;

void print(int a[])
{
    cout << endl;
    for (int i = 0; i < size; i++)
    {
        cout << a
                    [i]
             << "\t";
    }
}
void quick(int a[], int s, int e)
{
    int i, j, temp, pivot;

    if (s < e)
    {

        print(a);
        pivot = s;
        i = s;
        j = e;
        while (i < j)
        {
            while (a[i] <= a[pivot] && i < e)
            {
                i++;
            }
            while (a[pivot] < a[j])
            {
                j--;
            }

            if (i < j)
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
        temp = a[pivot];
        a[pivot] = a[j];
        a[j] = temp;
        quick(a, s, j - 1);
        quick(a, j + 1, e);
    }
}
int main()

{
    int a[100];
    cout << "arr is size enter : ";
    cin >> size;
    cout << " UN sort arr " << endl;
    for (int i = 0; i < size; i++)
    {
        a[i] = rand() % 100 + 1;
    }

    quick(a, 0, size - 1);

    cout << endl<<endl
         << "\t \t sort arr  :" << endl;
    print(a);
}
