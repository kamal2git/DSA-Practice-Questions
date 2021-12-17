#include<bits/stdc++.h>
using namespace std;

string isValid(string s){
    stack<char> st;
    for(int i=0;i<s.size();i++){
        if(s[i]=='(' || s[i]=='{' || s[i]=='['){
            st.push(s[i]);
        }
        else if(s[i]==')' && st.top()=='(' ||
                s[i]=='}' && st.top()=='{' ||
                s[i]==']' && st.top()=='[' ){
                    st.pop();
                }
    }
    if(isEmpty(st) && )

}