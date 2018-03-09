#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int k;
    cin>>k;
    int sum=0,smallest=INT_MAX,actual;
    while(n--){
        int a;
        cin>>a;
        if(abs(a)<smallest)
        {smallest=abs(a);
         actual=a;}
        if(a<0){
            if(k>0){
                sum+=(-1)*a;
                k-=1;
            }
            else{
                sum+=a;
            }
        }
        else{
             sum+=a;
        }
        //cout<<sum<<"  ";
    }
    if(k!=0){
        if(k%2!=0){
            sum-=2*smallest;
        }
    }
    cout<<sum<<endl;
}
