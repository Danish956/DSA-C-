#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    for(int i=0; i<=n-1; i++){
        cin>>arr[i];
    }
     int count=0;
     int x;
     cout<<"enter the number gretaer than which u want to find";
     cin>>x;
    for(int i=0; i<=n-1; i++){
        if(arr[i]>x) count++;
    }
    cout<<count;
}