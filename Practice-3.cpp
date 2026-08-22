#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter Size of Array : ";
    cin>>n;
    int array[n];
    cout<<"Enter Elements of Array : ";
    for(int i=0; i<n; i++)
    {
        cin>>array[i];
    }
    int maximum=array[0], minimum=array[0];
    for(int i=1; i<n; i++)
    {
        if(array[i]>maximum)
        {
            maximum=array[i];
        }
        if(array[i]<minimum)
        {
            minimum=array[i];
        }
    }
    cout<<"The Maximum : "<<maximum<<endl;
    cout<<"The Minimum : "<<minimum<<endl;
    return 0;
}