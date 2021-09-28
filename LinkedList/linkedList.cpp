#include<iostream>
using namespace std;
#include "node.cpp"
class linkedList{
    public:
    node* head;
    //node* temp=head;
    node* takeInputSMA(){          //taking input with static memory allocation
        int _data;
        cout<<"Enter data : "<<endl;
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
            cout<<"Enter data : "<<endl;
            cin>>_data;
        }
        return head;
    }
    node* takeInputDMA(){
        int data;
        cout<<"Enter node data : ";
        cin>>data;
        head=NULL;
        node* temp=head;
        while(data!=-1){
            node* newNode = new node(data);
            if(head=NULL){
                head->next=newNode;
            }
            else{
                while(temp->next!=NULL){
                    temp=temp->next;
                }
                temp->next=newNode;
            }
            cin>>data;
        }
        return head;
    }

};
int main(){
    node n1(1);
    linkedList ll;
    ll.takeInputSMA();
    return 0;
}