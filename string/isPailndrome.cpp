#include<iostream>
using namespace std;
string reverseString(string s){
    string rev_s;
    for(int i = s.size()-1;i>=0;--i){
        rev_s.push_back(s[i]);
    }
    return rev_s;
}
bool isPailndrome(string s){
    if(s==reverseString(s)){
        return true;
    }
    else return false;
}
bool isPailndrome_better(string s){
    for(int i=0;i<s.size();i++){
        if(s[i]!=s[s.size()-i-1]){
            return false;
        }
    }
    return true;
}
int main(){
    string s;
    cin>>s;
    bool ans = isPailndrome_better(s);
    cout<<ans<<endl;
    return 0;
}