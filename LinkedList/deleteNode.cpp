#include<iostream>
#include "node.cpp"
using namespace std;
node* delNode(node* head, int i){
    node* temp=head;
    if(i==0){
        head=head->next;
        delete temp;
        return head;
    }
    else{
        for(int k=0;k<i;k++){
            temp=temp->next;
        }
            node* a=temp->next;
            node* b=a->next;
            temp->next=b;
            delete a;
    }
}