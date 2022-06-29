#include<iostream>
using namespace std;
int lsearch(int arr[], int size, int item)
{
    for(int i=0; i<size; i++)
    {
        if(arr[i]==item)
        return i;
    }
    return -1;
}
int main()
{
    int arr[50], n,item ,index;
    cout<<"enter the size of array;";
    cin>>n;
    cout<<"\nenter the elements of array";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    cout<<"enter the element to be searched";
    cin>>item;
    index=lsearch(arr ,n ,item);
    if(index==-1)
    cout<<"element not found";
    else
    cout<<"element found at index:"<<index<<"\nposition:"<<index+1;
    return 0;    
}