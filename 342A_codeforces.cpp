#include<bits/stdc++.h>
using namespace std;
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
   int n;
    cin>>n;
    vector <int> a;
    for(int i=0;i<n;i++){
        int h;
        cin>>h;
        a.push_back(h);
    }
    sort(a.begin(),a.end());
   /** 
//For the case when the numbers are not just between 1-7
   for(int i=0;i<a.size();i++)
        cout<<a[i]<<"  "; 
    int b,index,k;
    bool res=true;
    for(int i=0;i<n-2;i++){
        if(a[i]>0){
        b=a[i];
        index=i;
        k=1;
        a2.push_back(b);}
        for(int j=index+1;j<n;j++){
           //cout<< "b  "<<b<<"\n";
           if(a[j]>b && a[j]%b==0 && a[j]>=0){
              b=a[j];
              index=j;
              k+=1;
              a[j]=-1;
              a2.push_back(b); 
           }
           if(k==3){
               break;
           }
           }
           
        
       if(k<3 ){
           res=false;
           break;
           
       }
        
    }
    if(a2.size()<n){
            res=false;
           
        }
     /**for(int i=0;i<a.size();i++)
        cout<<a2[i]<<"  "; **/
    
    bool res=true;
    int a2[8];
    for(int i=1;i<=7;i++){
        a2[i]=0;
    }
    for(int i=0;i<n;i++){
        if(a[i]==5 || a[i]==7)
        {
            res=false;
            break;
            
        }
        else{
            a2[a[i]]++;
        }
    }
    /**for(int i=1;i<=7;i++){
        cout<<a2[i]<<" ";
    }**/
    int a23=0,a24=0;
    for(int i=1;i<=7;i++){
        if(a2[4]>0){
            a24+=a2[4];
           a2[2]-=a2[4];
           a2[1]-=a2[4];
           a2[4]-=a2[4];
           
           if(a2[2]<0||a2[1]<0){
               //cout<<a2[2]<<" "<<a2[1]<<"broke here"<<" ";
               res=false;
               break;
               
           }
        }
        else if(a2[2]>0){
           a2[6]-=a2[2];
           a2[1]-=a2[2];
            a2[2]-=a2[2];
           if(a2[6]<0||a2[1]<0){
               //cout<<"broke here 2"<<" ";
               res=false;
               break;
               
           }
        }
        else if(a2[3]>0){
            a23+=a2[3];
           a2[6]-=a2[3];
           a2[1]-=a2[3]; 
           a2[3]-=a2[3];
           
           if(a2[6]<0||a2[1]<0){
               //cout<<"broke here 3"<<" ";
               res=false;
               break;
               
           }
        }
        else{
            if(a2[1]!=0 || a2[2]!=0 || a2[3]!=0 || a2[4]!=0 || a2[6]!=0)
            {res= false;
            break;}
            else
                break;
        }
    }
    int j=0;
    if(res){
        while(a23--){
            j+=3;
            cout<<1<<" "<<3<<" "<<6<<"\n";
        }
        while(a24--){
            j+=3;
            cout<<1<<" "<<2<<" "<<4<<"\n";
        }
        while(j<n){
            cout<<1<<" "<<2<<" "<<6<<"\n";
            j+=3;
        }
    }
    else
        cout<<-1<<endl;
    return 0;
}
