#include<iostream>
using namespace std;
int lsearch(int arr[], int size, int item)
{
    int beg=0;
    int last=size-1;
    int mid;
    while(beg<=last)
    {
        mid=(beg+last)/2;
        if(item==arr[mid])
        return mid;
        else if(item>arr[mid])
        beg=mid+1;
        else
        last=mid-1;
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