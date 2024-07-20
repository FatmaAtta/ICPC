#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=1;i<=n;++i){
        arr[i-1] =i;
    }
    int cnt=n-1;
    int parts=n/k +1;
    vector<vector<int>> num(parts,vector<int>(k,0));



//    for(int i=0;i<k;++i){
//        for(int j=parts;j>0;--j){
//            if(i + j*k <n){
//                num[i + j*k]=arr[cnt];
//                --cnt;
//            }
//        }
//    }

//    for(int i:num){
//        cout<<i<<" ";
//    }
    return 0;
}