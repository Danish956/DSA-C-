#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of array: ";
    cin>>n;
    int arr[n];
    for(int i=0; i<=n-1; i++){
        cin>>arr[i];
    }
    int min = arr[0];
    for(int i=1; i<=n; i++){
        if(arr[i]<min) min=arr[i];
    }
    cout<<min;
}
