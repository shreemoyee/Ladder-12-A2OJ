#include<bits/stdc++.h>

using namespace std;
typedef long long int ll; 

int main(){
    int n;
    cin>>n;
    vector<ll> a(n);
    for(int i=0;i<n;i++)
         cin>>a[i];
    sort(a.begin(),a.end());
    ll sum=0;
    for(int i=0;i<n;i++){
        sum+=abs(a[i]-(i+1));
    }
    cout<<sum<<endl;
}
