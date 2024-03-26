// diaplay this AP 1,3,5,7,9,11,13,15,17,19
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the value of n: ";
    cin>>n;
    //for(int i=1; i<=2*n-1; i+=2){
       // cout<<i<<endl;
   // }

   //without formula using a varriable
   int a=1;
   for(int i=1; i<=n; i++){
        cout<<a<<endl;
        a+=2;                                  
   }
}