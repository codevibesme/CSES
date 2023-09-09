#include<bits/stdc++.h>
using namespace std;
int main(){
    unordered_map<int, int>  m;
    int n; cin>>n;
    for(int i=0; i<n; i++){
        int x; cin>>x;
        m[x]++;
    }
    for(int i=1; i<=n; i++){
        if(m[i]==0){
            cout<<i<<endl;
            break;
        }
    }
    return 0;
}