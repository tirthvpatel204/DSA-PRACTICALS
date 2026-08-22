#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter Size : ";
    cin>>n;
    int arr[n];
    cout<<"Enter Elements : ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n-1;i++)
    {
        int minIdx=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[minIdx])
            {
                minIdx=j;
            }
        }
        int temporary=arr[i];
        arr[i]=arr[minIdx];
        arr[minIdx]=temporary;
    }
    cout<<"Sorted Array : ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}