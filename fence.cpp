#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    vector<int>f(n),cf(n);
    for(int i=0;i<n;++i){
        cin>>f[i];
    }
    cf[0]=f[0];
    for(int i=1;i<n;++i){
        cf[i]=f[i]+cf[i-1];
    }
    int min=cf[k-1]-cf[0];
    int minIndex=0;
    for(int i=0;i+k<n;){
        if(min> cf[i+k-1]-cf[i])
            min=cf[i+k-1]-cf[i];
        minIndex=i;
    }
    cout<<minIndex;
    return 0;
}