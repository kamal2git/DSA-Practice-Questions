#include<iostream>
using namespace std;
string reverseString(string s){
    string rev_s;
    for(int i = s.size()-1;i>=0;--i){
        rev_s.push_back(s[i]);
    }
    return rev_s;
}
