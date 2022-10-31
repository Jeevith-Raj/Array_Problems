#include<iostream>
using namespace std;

int main()
{
    int n,i;
    cout<<"Enter the dimension";
    cin>>n;
    int arr[n],abb[n];
    int temp,j;

    cout<<"Enter the elements in the array"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Before reversing"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
    cout<<"After reversing"<<endl;

    for(i=0,j=n-1;i<n/2,j<n-1 ;i++,j--)
    {
        abb[j] = arr[i];

    }

    for(i;i<n;i++)
    {
        cout<<abb[i]<<endl;
    }



}
