#include<bits/stdc++.h>
using namespace std;
int main(){
    int size;
    cin>>size;
    int arr[size];
    for(int k=0;k<size;k++){
        cin>>arr[k];
    }
    vector <int> v;
    stack <int> s;
    
    for(int i=size-1;i>=0;--i){
        if(s.size()==0){
            v.push_back(-1);
        }
        else if(s.size()>0 && s.top()>arr[i])
        {
            v.push_back(s.top());
        }
        else if(s.size()>0 && s.top() <= arr[i])
        {
            while(s.size()>0 && s.top()<=arr[i]){
                s.pop();
            }
            if(s.size()==0){
                    v.push_back(-1);
                }
                else if(s.size()>0 && s.top()>arr[i]) {
                    v.push_back(s.top());
                }
        }
        s.push(arr[i]);
    }
    reverse(v.begin(),v.end());
    for(int j=0;j<v.size();j++){
        cout<<v.at(j)<<" ";
    }
    return 0;
}