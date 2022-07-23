#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of array:";
    cin>>n;

    int a[n];
    cout<<"Enter the elements of array:";
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    int sum=0;
    for(int i=0 ;i<n ;i++)
    {
        sum=0;
        for(int j=i ;j<n ;j++)
        {
            sum+=a[j];
            cout<<sum<<endl;
        }
    }
    return 0;
}