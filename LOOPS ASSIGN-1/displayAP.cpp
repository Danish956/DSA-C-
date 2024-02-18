
//Display this AP - 4,7,10,13,16.. upto ‘n’ terms
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of term: ";
    cin>>n;
    // Method-1
    for(int i=4; i<=3*n-1; i+=33 ){
        cout<<i<<endl;
    

    //METHOD->2
    int a=4;
    for(int i=1; i<=n; i++){
        cout<<a<<endl;
        a=a+3;
    }
    

}