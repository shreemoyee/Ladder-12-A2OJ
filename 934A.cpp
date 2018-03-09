#include <bits/stdc++.h>
using namespace std;
typedef long long int lld;
typedef unsigned long long ll;
int main(){

    int n, m;
    cin>>n>>m;
    lld a[n],b[m];
    for(int i=0;i<n;i++)
    {
        lld x;
        cin>>x;
        a[i]=x;
    }
    for(int i=0;i<m;i++){
        lld x;
        cin>>x;
        b[i]=x;
    }
    sort(a,a+n);
    sort(b,b+m);
    if(a[0]<0 && b[0]<0){
        ll prod1 = a[0]*b[0];
        ll prod2 = a[n-2]*b[m-1];
        //cout<<prod2<<" ";
        if(prod1>prod2)
            cout<<prod1<<endl;
        else
            cout<<prod2<<endl;
        
    }
    else{
        ll prod2 = a[n-2]*b[m-1];
        //cout<<prod2<<" ";
        cout<< prod2<<endl;
    }
}
