// C++ program to count distinct divisors
// of a given number n
#include<bits/stdc++.h>
using namespace std;
 
typedef long long int ll;
typedef double d;
int N=100001;
int main()
{
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    int i=0;
    int c=0;
    while(n-1>i){
        if(a[n-1]-a[i]>k){
            if(a[n-2]-a[i]<a[n-1]-a[i+1]){
                c++;
                
                n-=1;
               // cout<<a[n-1]<<" ";
                
            }
            else if(a[n-2]-a[i]>a[n-1]-a[i+1]){
                c++;
                
                i+=1;
                //cout<<a[i]<<" ";
            }
            else if(a[n-2]-a[i]==a[n-1]-a[i+1]){
                c++;
                //cout<<a[n-1]<<" ";
                
                n-=1;
            }
        }
        else{
            break;
        }
    }
    cout<<c<<endl;
}
