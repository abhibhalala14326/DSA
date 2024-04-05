#include<iostream>
using namespace std;
int size ;
int mid;
int st=0;
int End=size-1;
int  key;
int arr[1000];
int Binary(int arr[],int st,int End,int key)
{
    mid=(st+End)/2;

    if(arr[mid]==key)
    {
        cout<<mid+1;
    
        return 1;
    }else if(arr[mid]<key)
    {
        st=mid+1;
    }else if(arr[mid>key]){
        End=mid-1;
    }else{

 
}

    
  
   return Binary( arr, st, End, key);
uju}

int main()
{
    
    cout<<"entrer the arr size : ";
    cin>>size;

    for (int i=0;i<=size-1;i++)
    {
        cin>>arr[i];
    }
     for (int i=0;i<=size-1;i++)
    {
        cout<<" "<<arr[i];
    }
    cout<<endl;
    cout<<"enter the key";
    cin>>key;
   int m= Binary(arr,0,size-1,key);
 
 


}