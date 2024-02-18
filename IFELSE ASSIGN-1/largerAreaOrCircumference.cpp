#include<iostream>
using namespace std;
int main(){
    float r, area, circumference;
    cout<<"Enter the radius of the circle ";
    cin>>r;
    area = 3.14*r*r;
    circumference = 2*3.14*r;
    if(area>circumference){
        cout<<"area is greater";
    }
    else{
        cout<<"Circumference is greater";
    }
    
}