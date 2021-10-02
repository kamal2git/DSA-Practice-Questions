#include<iostream>
#include "node.cpp"
using namespace std;
void addNodeithpos(node* head, int data, int i){
    node* newNode=new node(data);
    node* temp=head;
    int count=0;
    while(count<i-1){
        temp=temp->next;
        count++;
    }
    node *a=temp->next;
    temp->next=newNode;
    newNode->next=a;
}