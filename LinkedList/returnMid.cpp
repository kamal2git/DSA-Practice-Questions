#include "node.cpp"
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