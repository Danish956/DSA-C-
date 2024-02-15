#include<iostream>
using namespace std;
int main(){
    int x =5;
    if(x++ == 5){
        cout<<"five"<<endl;
    }
   else
    if(++x == 6){
        cout<<"six"<<endl;
    }
}