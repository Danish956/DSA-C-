#include<iostream>
using namespace std;
int main(){
    int x,y;
    int *p1=&x;
    int *p2=&y;
    cout<<"Enter the first num: ";
    cin>>*p1;
    cout<<"Ente rthe secondd num: ";
    cin>>*p2;
    cout<<*p1+*p2;
}