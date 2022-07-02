#include<iostream>
using namespace std;
int main()
{
    int arr[50], n ;
    cout<<"enter the size of array;";
    cin>>n;
    cout<<"\nenter the elements of array";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int count=0;
    while(count<n-1)
    {
        for(int i=0; i<(n-count-1); i++)
        {
            if(arr[i]>arr[i+1])
            {
                int temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        }
        count++;
    }
    for(int i=0 ; i<n ; i++ )
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}