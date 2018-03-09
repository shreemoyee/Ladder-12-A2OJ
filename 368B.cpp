
#include<bits/stdc++.h>
using namespace std;
 
typedef long long int ll;
typedef double d;
int N=100001;
int main()
{
    int n,m;
    cin>>n>>m;
    int a[n],hash[N]={0},res[n]={0};
    for(int i=0;i<n;i++){
        int h;
        cin>>h;
        a[i]=h;
                        }
    int j=0;
    for(int i=n-1;i>=0;i-=1){
        if(hash[a[i]]==0){
            hash[a[i]]+=1;
            j+=1;
            res[i]=j;
        }
        else{
            res[i]=j;
        }
    }
   while(m--){
       int h;
       cin>>h;
       cout<<res[h-1]<<"\n";
   }
}
