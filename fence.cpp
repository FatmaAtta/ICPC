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
    int min=310;
    int minIndex;
    for(int i=k;i<=n;++i){
        if(min > cf[i]-cf[i-k]){
            min=cf[i]-cf[i-k];
            minIndex=i-k+1;
        }
    }
    cout<<minIndex;
    return 0;
}