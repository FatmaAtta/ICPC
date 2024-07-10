#include <bits/stdc++.h>
using namespace std;

int main(){
    map<char, int> have,want;
    string a,b;
    int sum=0;
    cin>>a>>b;
    for (char c:a){
        have[c]++;
    }
    for(char c:b){
        want[c]++;
    }

    if(want.size()>have.size()){
        cout<<-1;
        return 0;
    }
    for(auto it=want.begin();it!=want.end();++it){
        if(have.find(it->first)==have.end()){
            cout<<-1;
            return 0;
        }
        else{
            sum+=min(it->second,have[it->first]);
        }
    }
    cout<<sum;
    return 0;
}