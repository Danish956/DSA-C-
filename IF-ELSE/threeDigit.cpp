#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    if(n>=100 && n<=1000){
        cout<<"It's a three digit number";
    }
    else{
        cout<<"Its not a three digit number";
    }
}