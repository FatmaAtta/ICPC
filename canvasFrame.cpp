#include <bits/stdc++.h>
using namespace std;


int main(){
    int n, num, sum=0, two=0;
    cin>>n;
    map<int,int>mp;
    while(n--){
        cin>>num;
        mp[num]++;
    }
    for(auto m:mp){
            sum+=m.second/2;
    }
    cout<<sum/2;

}