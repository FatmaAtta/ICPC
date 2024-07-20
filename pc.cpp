#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    int cnt=n*m;
    char symbol;
    int dash=0,stick=0;
    while(cnt--){
        cin>>symbol;
        if(symbol=='-'){
            dash++;
        }
        else if(symbol=='|'){
            stick++;
        }
    }
    cout<<(dash/2) * (stick/2);
    return 0;
}