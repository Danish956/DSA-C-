#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number if rows: ";
    cin>>n;
    for(int i=0; i<=n; i++){
        for(int j=1; j<=n+1-i; j++){
            cout<<"*";
        }

        cout<<endl;
    }
}