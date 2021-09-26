#include<iostream>
using namespace std;
#include "node.cpp"
class linkedList{
    public:
    node* head;
    //node* temp=head;
    node* takeInput(){
        int _data;
        cin>>_data;
        head=NULL;
        node* temp=head;
        while(_data!=-1){
            node n(_data);
            if(temp->next==NULL){
                head->next=&n;
            }
            else{
                while(temp->next!=NULL){
                    temp=temp->next;
                }
                temp->next=&n;
            }
            cin>>_data;
        }
        return head;
    }


};