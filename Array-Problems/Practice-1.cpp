//Simple Array Problems
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter Size of array :";
    cin>>n;
    int array[n];
    cout<<"Enter Elements : ";
    for(int i=0; i<n; i++)
    {
        cin>>array[i];
    }
    cout<<"Our Array is :";
    for(int i=0; i<n; i++)
    {
        cout<<array[i]<<" ";
    }
    return 0;
}