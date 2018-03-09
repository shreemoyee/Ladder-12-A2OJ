#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    string s;
    cin>>n;
    
    int i=0;
    
    while(n>0){
            if(n>=2){
                s+="8";
                n-=2;
            }
            else{
                s+="6";
                n-=1;}
        }
        
    
    if(s.length()>17)
        cout<<-1;
    else
        cout<<s;
    return 0;
}
