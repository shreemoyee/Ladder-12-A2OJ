#include <bits/stdc++.h>
using namespace std;

int main(){

    long long n; 
    cin >> n;
    vector<long long> state(n);
    for(long p = 0; p < n; p++){std::cin >> state[p];}

    long long m; 
    cin >> m;
    while(m--){

        long long w, h; 
        cin >> w >> h;
        long long bottom = (state[0] > state[w - 1] ? state[0] : state[w - 1]);
        cout << bottom << std::endl;
        state[0] = bottom + h;
    }

    return 0;
}
