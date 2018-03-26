#include<bits/stdc++.h>

using namespace std;
typedef long long int ll; 

int main(){
    string s;
    cin>>s;
    int n=s.length();
    int a[26]={0};
    for(int i=0;i<n;i++){
        a[s[i]-'a']++;
    }
    int sum=0;
    for(int i=0;i<26;i++){
        if(a[i]%2!=0)
            sum+=1;
    }
    if(sum%2==0 && sum!=0)
        cout<<"Second"<<endl;
    else
        cout<<"First"<<endl;
}
