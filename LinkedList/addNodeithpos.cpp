#include<iostream>
#include "node.cpp"
using namespace std;
node* addNodeithpos(node* head, int data, int i){
    node* newNode=new node(data);
    node* temp=head;
    if(i==0){
        newNode->next=head;
        head=newNode;
        return head;
    }
    int count=0;
    while(temp!=NULL && count<i-1){
        temp=temp->next;
        count++;
    }
    if(temp!=NULL){
        node *a=temp->next;
    temp->next=newNode;
    newNode->next=a;
    }
    return head;
}