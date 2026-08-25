#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5};
    int n=5;
    for(int i=0;i<n/2;i++){
        int t=arr[i];
        arr[i]=arr[n-1-i]; //swap
        arr[n-1-i]=t;
    }
    cout<<"Reversed array is:";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}