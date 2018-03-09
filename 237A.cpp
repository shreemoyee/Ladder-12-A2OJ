#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int  max=0, prevh=-1, prevm=-1;
    int curr=1;
    while(n--){
        int h,m;
        cin>>h>>m;
        //cout<<h<<" "<<m<<" "<<prevh<<" "<<prevm<<" ";
        if(h==prevh && m==prevm){
            //cout<<"same";
            curr=curr+1;
            //cout<<"curr  "<<curr<<" ";
        }
        else{
            prevh=h; 
            prevm=m;
            if(curr>max)
               max=curr;
            curr=1;
        }
    }
    if(curr>max)
               max=curr;
    cout<<max<<endl;
}
