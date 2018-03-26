#include<bits/stdc++.h>

using namespace std;
 

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        //can use 3 or any other number instead of 5. The idea is to make it (3*n) large so that in the range [3*n, 3*n + n+1] there is no number
// divisible by any of its predecessor.  
        cout<<5*n + i <<"  ";
    }
}
