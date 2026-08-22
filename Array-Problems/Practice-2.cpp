#include<iostream>
using namespace std;
int main()
{
    int n, sum=0;
    cout<<"Enter Array Size : ";
    cin>>n;
    int arr[n];
    cout<<"Enter Array Elements : ";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }
    float average=sum/n;
    cout<<"The sum of Array is : "<<sum<<endl;
    cout<<"Average of Array is : "<<average<<endl;
    
    return 0;
    
}