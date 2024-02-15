#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    if(n%3==0 && n%5==0){
        cout<<"it is divisible by three and five";
    }
    else{
        cout<<"it is not divisible by five and  three";
    }
}