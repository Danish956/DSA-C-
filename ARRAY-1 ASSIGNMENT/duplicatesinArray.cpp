#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of array: ";
    cin>>n;
    int arr[n];
    for(int i=1; i<n; i++){
        cin>>arr[i];
    }

    bool flag=false; //no duplicate
    for(int i=1; i<=n; i++){
        for(int j=i+1; j<=n; j++){
            if(arr[i]==arr[j]){
                flag=true;
                break;
            }

        }
        if(flag==true) break;
    }
    if(flag==true) cout<<"duplicate found";
    else cout<<"all elemet are unique";


}