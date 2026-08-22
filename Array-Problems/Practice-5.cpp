//Count Even and Odd ELements 
#include<iostream>
using namespace std;
int main()
{
    int n,even=0,odd=0;
    cout<<"Enter Size of Array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter Elements of Array : ";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        if(arr[i] % 2==0)
        {
            even++;
        }else
        {
            odd++;
        }
    }
    cout<<"Even Numbers : "<<even<<endl;
    cout<<"Odd Numbers : "<<odd<<endl;5
    return 0;
}