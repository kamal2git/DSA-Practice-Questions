#include<iostream>
using namespace std;
int main(){
    /*char c = 'a'; //dec of char
    string s1 = "kamal"; //dec of string
    string s2 = "sharma"; 
    string s = s1 + " " + s2; //concatenation of string
    cout<<s<<endl;
    cout<<s[0]<<endl; //s[index] is a char and not a string
    string getString;
    getline(cin, getString);  //getline(cin, string_name) fn to get the whole line as input in string
    cout<<getString<<endl;
    //catch point with getline fn
    int t;
    cin>>t;
    cin.ignore();
    for(int i=0;i<t;i++){
        string s;
        getline(cin,s);
        cout<<s<<endl;
    }*/
    cout<<"kamal"<<endl;
    string s4;                //a string defined but not aaaigned is an empty string 
    s4 = s4 + "okay";
    cout<<s4<<endl;
    cout<<"sharma"<<endl;
    s4.push_back('K');
    cout<<s4<<endl;
    return 0;
}