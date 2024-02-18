#include<iostream>
using namespace std;
int main(){
    int x, y;
    cout<<"Enter the first number";
    cin>>x;
    cout<<"enter the second number";
    cin>>y;
    int z = (x>y) ? x : y;
    cout<<"the greatest number is"<<z;
}