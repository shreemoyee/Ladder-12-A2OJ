#include <bits/stdc++.h>
using namespace std;
typedef long long int lld;
typedef unsigned long long ll;
int main(){

    int n;
    int a, b, c, d;
    cin>>n>>a>>b>>c>>d;
    int x=c-a;
    int y=d-b;
    int arr[4]={0};
    if(x<0){
        arr[3]=abs(x);
        
    }
    else{
        arr[1]=x;
    }
    if(y<0)
        arr[2]=abs(y);
    else
        arr[0]=y;
    int ans=0;
    while(n--){
        char s;
        cin>>s;
        if(arr[0]>0||arr[1]>0||arr[2]>0||arr[3]>0)
            ans+=1;
        if(s=='N')
            {
            arr[0]-=1;
         }
        else if(s=='E')
            arr[1]-=1;
        else if(s=='S')
            {arr[2]-=1;}
        else
            {arr[3]-=1;}
    }
    bool res=true;
    for(int i=0;i<4;i++)
        if(arr[i]>0){
            res=false;
            break;
        }
    if(res)
        cout<<ans<<endl;
    else
        cout<<-1<<endl;
        
}
