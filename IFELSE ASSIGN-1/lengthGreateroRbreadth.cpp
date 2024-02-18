#include<iostream>
using namespace std;
int main(){
    float L,B,Area,Breadth;
    cout<<"enter the length of the reactangle: "<<endl<<"enter the breadth of the reactangle: ";
    cin>>L>>B;
    Area = L*B;
    Breadth = 2*(L+B);
    if(Area>Breadth){
        cout<<"Area is greater ";
    }
    else{
        cout<<"Breadth is greater";
    }

}