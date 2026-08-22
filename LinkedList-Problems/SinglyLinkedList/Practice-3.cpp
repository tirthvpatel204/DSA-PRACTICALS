#include <iostream>
using namespace std;
struct Node 
{
    int data;
    Node* next;
};
int main() 
{
    Node* head=new Node();
    head->data=10;
    head->next=NULL;
    Node* second=new Node();
    second->data=20;
    second->next=NULL;
    head->next=second;
    Node* newNode=new Node();
    newNode->data=30;
    newNode->next=NULL;
    Node* temp=head;
    while(temp->next!=NULL)
        temp=temp->next;

    temp->next=newNode;
    temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<< " ";
        temp=temp->next;
    }
    return 0;
}



//Main Logic 

/*  while(temp->next != NULL)
     temp = temp->next;
    temp->next = newNode;         */