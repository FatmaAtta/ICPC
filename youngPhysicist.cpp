#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int x,y,z;
    int sumx=0,sumy=0,sumz=0;
    while(n--){
        cin>>x>>y>>z;
        sumx+=x; sumy+=y; sumz+=z;
    }
    if(!sumx && !sumy && !sumz){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}