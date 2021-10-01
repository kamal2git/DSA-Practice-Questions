#include<iostream>
using namespace std;
void reverseOne(int arr[], int n){
    int temp=arr[0];
    for(int i=0;i<n-1;i++){
        arr[i]=arr[i+1];
    }
    arr[n-1]=temp;
}
void reverseByd(int arr[],int n,int d){
    while(d){
        reverseOne(arr,n);
        d--;
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    /*reverseOne(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }*/
    int d;
    cin>>d;
    reverseByd(arr,n,d);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}