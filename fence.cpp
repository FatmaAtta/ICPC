#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    int sum=0;
    vector<int>num(n+1,0);
    for(int i=1;i<=n;++i){
        cin>>num[i];
        if(i<=k){
            sum+=num[i];
        }
    }
    int min=sum;
    int index=1;
    for(int i=2;i<=n-k+1;++i){
        sum=sum-num[i-1]+num[i+k-1];
        if(min>sum){
            min=sum;
            index=i;
        }
    }
    cout<<index;
    return 0;
}