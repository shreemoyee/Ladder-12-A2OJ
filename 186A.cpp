// C++ program to count distinct divisors
// of a given number n
#include<bits/stdc++.h>
using namespace std;
 
typedef long long int ll;
typedef double d;

int main()
{
    string s1,s2;
    cin>>s1>>s2;
    bool ans=true;
    if(s1.length()!=s2.length())
        ans=false;
    else{
    int j=0;
    int a,b;
    for(int i=0;i<s1.length();i++){
        if(s1[i]!=s2[i] && j==0){
            j++;
            a=i;
        }
        else if(s1[i]!=s2[i] && j==1){
            j++;
            b=i;
        }
        else if(s1[i]!=s2[i] && j>1){
            ans=false;
            break;
        }
    }
    //cout<<ans<<" ";
    if(ans && j==2){
        char t=s1[a];
        s1[a]=s1[b];
        s1[b]=t;
        if(s1!=s2)
            ans=false;
    }
    else if(ans && j==1)
            ans=false;
    //cout<<s1<<" "<<s2<<" ";
    }
    if(ans)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
