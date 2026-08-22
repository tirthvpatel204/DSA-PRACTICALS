/*#include <iostream>
using namespace std;
struct Node 
{
    int data;
    Node* next;
};
int main() 
{
    Node* head=new Node();
    Node* second=new Node();
    Node* third=new Node();
    head->data=10;
    head->next=second;
    second->data=20;
    second->next=third;
    third->data=30;
    third->next=NULL;
    Node* temp=head;
    while(temp!=NULL) 
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    return 0;
}*/

// LinkedList Using User Input

#include<iostream>
using namespace std;
struct Node
{
    int data;
    Node* next;
};
int main()
{
    int n;
    cout<<"Enter Size of Node : ";
    cin>>n;
    Node* head=NULL;
    Node* temp=NULL;
    for(int i=0; i<n; i++)
    {
        Node* newNode=new Node();
        cin>>newNode->data;
        newNode->next=NULL;
        if(head==NULL)
        {
            head=newNode;
            temp=newNode;
        }else
        {
            temp->next=newNode;
            temp=newNode;
        }
    }
    temp=head;
    while(temp != NULL)
    {
        cout<<temp->data<< " ";
        temp=temp->next;
    }
    return 0;
}