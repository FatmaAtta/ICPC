#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    long long product=1;
    int num;
    while(n--){
        cin>>num;
        product*=num;
    }
    double root = pow(product,1.0/k);
    long long root_int = static_cast<int>(root);

    if(root-root_int){
        cout<<"NO";
    }
    else{
        cout<<"YES";
    }
    return 0;
}