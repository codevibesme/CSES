#include<bits/stdc++.h>
using namespace std;
int main() {
    string dna; cin>>dna;
    int maxReps=1;
    int reps=1;
    for(int i=1; i<dna.length(); i++){
        if(dna[i]==dna[i-1]){
            reps++;
        }
        else reps=1;
        maxReps = max(reps, maxReps);
    }
    cout<<maxReps<<endl;
    return 0;
}