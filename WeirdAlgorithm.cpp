#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n; cin>>n;
    while(n>1){
        cout<<n<<" ";
        if(n&1)
            n=(n*1ll*3+1);
        else n/=2;
    }
    cout<<n<<endl;
    return 0;
}