// C++ program to count distinct divisors
// of a given number n
#include<bits/stdc++.h>
using namespace std;
 
typedef long long int ll;
typedef double d;
int N=100001;
int main()
{
    int n;
    cin>>n;
    //ll a[n];
    ll maxi=INT_MIN, mini=INT_MAX,maxn=0,minn=0;
    for(int i=0;i<n;i++){
        ll h;
        cin>>h;
        //a[i]=h;
        if(h>maxi){
            {maxi=h;
             maxn=0;
            }
        }
        if(h<mini)
            {mini=h;
            minn=0;
            }
        if(h==maxi )
            maxn++;
        if(h==mini )
            minn++;
                        }
   // cout<<minn*maxn<<"  ";
    cout<<maxi-mini<<" "<<(maxi-mini==0?minn*(maxn-1)/2:maxn*minn)<<endl;
    
}
