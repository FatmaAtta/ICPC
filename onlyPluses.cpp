#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    int a,b,c;
    cin>>t;
    while(t--){
        cin>>a>>b>>c;
        for(int i=0;i<5;++i){
            if(a<=b&&a<=c){
                a++;
            }
            else if(b<=a&&b<=c){
                b++;
            }
            else if(c<=a&&c<=b){
                c++;
            }
        }
        int ans=a*b*c;
        cout<<ans<<"\n";
    }

    return 0;
}