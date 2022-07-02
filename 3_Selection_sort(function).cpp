/*
Logic: find the minimum element in the unsorted array and swap it with the element in the begining.
*/

#include<iostream>
using namespace std;
int selsort(int arr[], int size)
{
    int temp;
    for(int i=0 ; i<size-1 ; i++)
    {
        for(int j=i+1 ; j<size ; j++)
        {
            if(arr[j]<arr[i])
            {
              temp=arr[j];
              arr[j]=arr[i];
              arr[i]=temp; 
            }
        }
        
    }
}
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
    selsort(arr ,n);
    cout<<"Sorted array is :";
    for(int i=0 ; i<n ; i++ )
    {
        cout<<arr[i]<<" ";
        cout<<endl;
    }
    return 0;
}    