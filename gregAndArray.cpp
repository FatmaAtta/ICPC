#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m,k;
    cin>>n>>m>>k;
    vector<int>arr(n+1);
    for(int i=1; i<=n; ++i){
        cin>>arr[i];
    }
    vector<vector<int>>cf(m+1,vector<int>(n+1,0));
    int l,r,d;
    cin>>l>>r>>d;
    for(int i=l;i<=r;++i){
        cf[1][i]=d;
    }
    for(int j=2;j<=m;++j){
        cin>>l>>r>>d;
        for (int i = 1; i <= n; ++i) {
            if(i>=l&&i<=r){
                cf[j][i] = cf[j-1][i]+d;
            }
            else{
                cf[j][i] += cf[j-1][i];
            }
        }
    }
    int x,y;
    for(int i=0;i<k;++i){
        cin>>x>>y;
        for(int j=1;j<=n;++j){
            arr[j]=arr[j]+cf[y][j]-cf[x-1][j];
        }
    }
    for(int i=1;i<=n;++i){
        cout<<arr[i]<<" ";
    }


    return 0;
}