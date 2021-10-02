#include<iostream>
using namespace std;
#include "node.cpp"
node* takeInputBetter(){
    int data;
    cin>>data;
    node* head=NULL;
    node* tail=NULL;
    while(data!=-1){
        node* newNode = new node(data);
        if(head==NULL){
            head=newNode;
            tail=newNode;
        }
        else{
            tail->next=newNode;
            tail=newNode;
        }
        cin>>data;
    }
    return head;
}
int main(){
    return 0;
}