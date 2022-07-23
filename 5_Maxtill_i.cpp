#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;
    int mx=-199999;
    cout<<"Enter the size of array:";
    cin>>n;

    int a[n];
    cout<<"Enter the elements of array:";
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(int i=0; i<n; i++)
    {
        int mx=max(mx, a[i]);
        cout<<mx<<endl;
    }
    return 0;
}