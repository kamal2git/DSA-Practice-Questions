#include<iostream>
using namespace std;
void rotateArray(int arr[], int n, int r){
    int tempArr[r];
    for(int i=0;i<n;i++){
        tempArr[i]=arr[i];
    }
    int temp=r;
    for(int i=0;i<n-r;i++){
        arr[i]=arr[temp];
        temp++;
    }
    int temp2=0;
    for(int i=n-r;i<n;i++){
        arr[i]=tempArr[temp2];
        temp2++;
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int r;
    cin>>r;
    rotateArray(arr,n,r);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}