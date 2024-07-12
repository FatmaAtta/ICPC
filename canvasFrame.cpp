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
        if(m.second%4==0){
            sum+=m.second/4;
            m.second=m.second/4-1;
        }
        if(m.second%2==0){
            two+=m.second/2;
            m.second=m.second/2;
        }
    }
    sum+=two/2;
    cout<<sum;
}