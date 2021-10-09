#include "node.cpp"
node* returnMidBetter(node* head){
    node* slow=head;
    node* fast=head;
    while(fast!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;                  //todo
}