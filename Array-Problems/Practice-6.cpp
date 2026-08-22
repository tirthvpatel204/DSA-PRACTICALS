//Find Duplicate Elements 
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter Size of Array :";
    cin>>n;
    int arr[n];
    cout<<"ENter Elements of Array : ";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    cout<<"Duplicates Elements in Array : ";
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(arr[i]==arr[j])
            {
                cout<<"Duplicate Elements :"<<arr[i]<<endl;
                break;
            }
        }
    }
    return 0;
}