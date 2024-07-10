#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, m, k;
    cin>>n>>m>>k;
    vector<int> social(m);
    vector<int>cows(n);
    for(int i=0;i<m;++i){
        cin>>social[i];
    }
    int c, p;
    int minPos=n;
    while(k--){
        cin>>c>>p;
        if(p-1<minPos){
            minPos=p-1;
        }
        cows[p-1]=c;
    }
    int zero=0;
    int num=minPos;
    for(int i=0;i<n;++i){
        if(cows[i]==0){
            zero++;
        }
        else if(cows[i]){
            int pos = find(social.begin(),social.end(),cows[i])-social.begin();
            if(pos == social.size()){
                continue;
            }
            else{

            }
            num=i;
        }
    }
    return 0;
}
