#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"ENter Number of Elements : ";
    cin>>n;
    int arr[n];
    cout<<"Enter Elements : ";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int key;
    cout<<"ENter Key : ";
    cin>>key;
    for(int i=0; i<n; i++)
    {
        if(arr[i]==key)
        {
            cout<<"Elements found at idx : "<<i;
            return 0;
        }
    }
    cout<<"ELement not FOund . ";
    return 0;
}