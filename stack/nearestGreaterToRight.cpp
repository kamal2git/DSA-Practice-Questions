#include<iostream>
using namespace std;
int main(){
    int size;
    cin>>size;
    int arr[size];
    vector <int> v;
    stack <int> s;
    
    for(int i=size;i>0;i++){
        if(s.size()==0){
            v.push_back(-1);
        }
        else if(s.size()>0 && s.top()>arr[i])
        {
            v.push_back(s.top());
        }
        else if(s.size>0 && s.top() <= arr[i];)
        {
            while(s.size()>0 && s.top()<=arr[i]){
                s.pop();
                if(s.size()==0){
                    v.push_back(-1);
                }
                else {
                    v.push_back(s.top());
                }
            }
        }
        s.push(arr[i]);
    }
}



