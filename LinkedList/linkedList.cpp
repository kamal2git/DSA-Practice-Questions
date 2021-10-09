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
            tail=newNode;         //OR tail=tail->next;
        }
        cin>>data;
    }
    return head;
}
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
void print(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
node* delNode(node* head, int i){  //yet to be checked! I'll do it later.
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

node* returnMid(node* head){
    int count=1;
    node* temp=head;
    while(temp->next!=NULL){
        count++;
    }
    
        node* ansNode=head;
        count/=2;
        while(count){
            ansNode=ansNode->next;
        }
        return ansNode;
}
bool isPresent(node* head,int x){
    node* current=head;
    while(current->next!=NULL){
        if(current->data==x){
            return true;
        }
        current=current->next;
    }
    return false;
}
int main(){
    node* head=takeInputBetter();
    print(head);
    int add;
    cout<<"enter add ";
    cin>>add;
    addNodeithpos(head,add,2);
    print(head);
    delNode(head,4);
    print(head);
    node* b=returnMid(head);
    cout<<"Mid node data : "<<b->data<<endl;
    int x;
    cout<<"enter x: ";
    cin>>x;
    bool isP = isPresent(head,x);
    cout<<isP<<endl;
    return 0;
}