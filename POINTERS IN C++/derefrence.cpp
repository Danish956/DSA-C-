#include<iostream>
using namespace std;
int main(){
    int x=122;
    int *p =&x;
    cout<<x<<endl;
    *p=55;
    cout<<*p; //defrence operator
}