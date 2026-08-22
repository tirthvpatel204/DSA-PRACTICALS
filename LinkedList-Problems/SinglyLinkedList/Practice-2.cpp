//Insert at Beginning
#include<iostream>
using namespace std;
struct Node
{
    int data;
    Node* next; 
};
int main()
{
    Node* head=new Node();
    head->data=20;
    head->next=NULL;    // next node is null , and final output : 10 -> 20 -> NULL
    Node* newNode=new Node();
    newNode->data=10;
    newNode->next=head;
    head=newNode;
    Node* temp=head;
    while(temp!=NULL) 
    {
        cout<<temp->data<< " ";
        temp=temp->next;
    }
    return 0;
}

// Main Logic
/* newNode->next = head;
   head = newNode; */