#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number of element: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elment of array: ";
    for(int i=0; i<=n-1; i++){
        cin>>arr[i];
    }

    //printing
    for(int i=0; i<=n-1; i++){
        cout<<arr[i]<<endl;
    }
}