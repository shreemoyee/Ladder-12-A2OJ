// C++ program to count distinct divisors
// of a given number n
#include<bits/stdc++.h>
using namespace std;
 
typedef long long int ll;
typedef double d;

int main()
{
    int n,m;
    cin>>n>>m;
    int a[n];
    int val_add=0;
    for(int i=0;i<n;i++){
        int h;
        cin>>h;
        a[i]=h;
    }
    while(m--){
        int s;
        cin>>s;
        if(s==1){
            int b,c;
            cin>>b>>c;
            a[b-1]=c-val_add;
            //update[b]=0;
        }
        else if(s==2){
            int b;
            cin>>b;
            val_add+=b;
        }
        else{
            int b;
            cin>>b;
            cout<<a[b-1]+val_add<<"\n";
        }
    }
    
    
}
