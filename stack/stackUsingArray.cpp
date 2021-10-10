#include<iostream>
using namespace std;
class stackUsingArray{
    int *data;
    int nextIndex;
    int capacity;
    
    public:
    stackUsingArray(int totalSize){
        data=new int[totalSize];
        nextIndex=0;
        capacity=totalSize;
    }
    int size(){
        return nextIndex;
    }
    bool isEmpty(){
        /*if(nextIndex==0){
            return true;
        }
        else return false;*/
        return nextIndex==0;
    }
    void push(int ele){
        if(nextIndex==capacity){
            cout<<"Stack full!"<<endl;
            return;
        }
        data[nextIndex]=ele;
        nextIndex++;
        
    }
    int pop(){
        if(isEmpty()){
            cout<<"Stack is empty! nothing to pop."<<endl;
            return INT_MIN;
        }
        nextIndex--;
        return data[nextIndex];
    }
    int top(){
        if(isEmpty()){
            cout<<"Stack is empty! nothing in top."<<endl;
            return INT_MIN;
        }
        return data[nextIndex-1];
    }
};
int main(){
    stackUsingArray s(4);
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    cout<<s.top()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.size()<<endl;
    cout<<s.isEmpty()<<endl;
    return 0;
}
