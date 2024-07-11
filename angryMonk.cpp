#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,k;
        cin>>n>>k;
        vector<int> num(k);
        for(int i=0;i<k;++i){
            cin>>num[i];
        }
        sort(num.begin(),num.end(), greater<int>());
        long long sum=0;
        for(int i=1;i<k;++i ){
            sum+=(num[i]+num[i]-1);
        }
        cout<<sum<<"\n";
    }
    return 0;
}