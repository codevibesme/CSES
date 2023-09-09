#include<bits/stdc++.h>
using namespace std;
int main() {
    int n; cin>>n;
    if(n==1) cout<<"1\n";
    else if(n<4) cout<<"NO SOLUTION"<<endl;
    else if(n == 4){
        cout<<"2 4 1 3"<<endl;
    }
    else{
        vector<int> per(n);
        int i=1;
        int k=0;
        while(i<=n){
            per[k++]=i;
            i+=2;
        }
        i=2;
        while(i<=n){
            per[k++]=i;
            i+=2;
        }
        for(int i=0; i<n; i++) cout<<per[i]<<" ";
        cout<<endl;
    }
    return 0;
}