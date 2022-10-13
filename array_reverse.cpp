#include<iostream>
using namespace std;

int main()
{
    int n,i;
    cout<<"Enter the dimension"<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter in the array"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Output"<<endl;

    while(n--)
    {
        cout<<a[n]<<endl;
    }
}