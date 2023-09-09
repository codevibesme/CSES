#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    int maxSoFar=0;
    long long ans=0;
    for(int i=0; i<n; i++){
        int x; cin>>x;
        if(maxSoFar > x){
            ans+= (maxSoFar-x)*1ll;
        } else maxSoFar = x;
    }
    cout<<ans<<endl;
    return 0;
}