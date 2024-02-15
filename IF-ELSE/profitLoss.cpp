#include<iostream>
using namespace std;
int main(){
    int cp;
    cout<<"Enter the cost price : ";
    cin>>cp;
    int sp;
    cout<<"Enter the selling price : ";
    cin>>sp;
    if(sp>cp){
        int m = sp-cp;
        cout<<"its a profit of "<<m;
    }
    else{
        int n = cp-sp;
        cout<<"its a loss of "<<n;
    }
}