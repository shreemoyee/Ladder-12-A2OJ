#include<bits/stdc++.h>
using namespace std;
 
typedef long long int ll;
typedef double d;
int N=100001;
int main()
{
    int a,b,c;
    int x,y,z;
    cin>>a>>b>>c;
    x=(b-c+a);
    y=(b+c-a);
    z=(a-b+c);
    if(x<0||y<0||z<0||x%2!=0||y%2!=0||z%2!=0)
        cout<<"Impossible"<<endl;
    else
        cout<<x/2<<" "<<y/2<<" "<<z/2<<" ";
        
    
}
