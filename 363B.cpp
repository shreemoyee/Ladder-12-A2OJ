#include<bits/stdc++.h>

using namespace std;
typedef long long int ll; 

int main(){
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int curr=0;
    for(int i=0;i<k;i++)
        curr+=a[i];
    int s=0;
    int maxi=curr;
    for(int i=0;i+k<n;i++){
        curr+=a[i+k];
        curr-=a[i];
        if(curr<maxi)
        {
            maxi=curr;
            s=i+1;
        }
    }
    cout<<s+1<<endl;
}
