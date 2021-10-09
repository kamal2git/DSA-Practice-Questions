#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    //public:
    node(int data){
        this->data=data;
        next=NULL;
    }
};
class stackUsingLinkedList{
    node* head;
    node* tail;
    int idx;
    public:
    stackUsingLinkedList(){
        head=NULL;
        tail=NULL;
        idx=0;
    }
    void push(int data){
        node* newNode = new node(data);
        if(head==NULL){
            head=newNode;
            tail=newNode;
            idx=0;
        }
        else{
            tail->next=newNode;
            tail=newNode;
            idx++;
        }
    }
    void pop(){
        node* temp=head;
        while(temp->next->next != NULL){
            temp=temp->next;
        }
        //node delete and some other chores...
    }
    int size(){
        return idx;
    }
    bool isEmpty(){
        return idx==0;
    }
};