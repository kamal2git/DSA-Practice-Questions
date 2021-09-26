#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(){
        this->next=NULL;
    }
    node(int data){
        this->data=data;
        this->next=NULL;
    }
};