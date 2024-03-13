#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n: ";
    cin>>n;
    int r;
    cout<<"enter r: ";
    cin>>r;

    // n!
    int fact=1; 
    for(int i=2; i<=n; i++){
        fact*=i;

    }
    

    //r!
    int rfact=1;
    for(int i=2; i<=r; i++){
        rfact*=i;
    }
   

    // n-r!
    int nrfact=1;
    for(int i=2; i<=n-r; i++){
        nrfact*=i;
    }
    
    int ncr=fact/(rfact*nrfact);
    cout<<ncr;
}