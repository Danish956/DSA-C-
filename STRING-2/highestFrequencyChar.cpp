#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
    string s = "daaannjsgaa";
    int max=0;
    for(int i=0; i<s.length(); i++){
       char ch = s[i];
       int count =1;
       for(int j=i+1; j<s.length(); j++){
        if(s[j]==s[i]) count++;
       } 
       if(max<count) max=count;

    }
    cout<<max<<" ";


    //printing that maximum charr

    for(int i=0; i<s.length(); i++){
       char ch = s[i];
       int count =1;
       for(int j=i+1; j<s.length(); j++){
        if(s[j]==s[i]) count++;
       } 
       if(count==max){
        cout<<ch<<" "<<endl;
       }

    }
  

}