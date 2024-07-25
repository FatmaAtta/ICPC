#include <bits/stdc++.h>
using namespace std;



int main(){
    long long classmates, speed;
    cin>>classmates>>speed;

    vector<long long> reaction(classmates), distance(classmates);

    for(long long i =0;i<classmates;++i){
        cin>>reaction[i];
    }
    for(long long i =0;i<classmates;++i){
        cin>>distance[i];
    }
    long long time;
    long long sum=0;
    for(long long i=0;i<classmates;++i){
        time=distance[i]/speed;
        if(time<reaction[i]){
            sum++;
        }
    }
    cout<<sum;
    return 0;
}