#include<iostream>
using namespace std;
int main(){
    int a, b , c;
    cout<<"Enter the three side of the triangle";
    cin>>a>>b>>c;
    if(a==b==c){
        cout<<"its a equalateral triangle";
    }
    else if(a==b!=c){
        cout<<"it's isoselec triangle";

    }
    else{
        cout<<"its a scalene triangle";
    }

    
    

   
}