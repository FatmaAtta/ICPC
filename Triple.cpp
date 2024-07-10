#include <bits/stdc++.h>

using namespace std;

int main(){
    int t, n, in;
    cin>>t;
    while(t--){
        bool ok = false;
        map<int, int> mp;
        cin>>n;
        while(n--){
            cin>>in;
            if(ok){
                continue;
            }
            mp[in]++;
            if(mp[in]>=3){
                cout<<in<<"\n";
                ok = true;

            }
        }
        if(!ok){
            cout<<-1<<"\n";
        }
    }
    return 0;
}
//        bool br = false;
//        cin>>n;
//        int arr[200000]={0};
//        while(n--){
//            cin>>in;
//            arr[in-1]++;
//            if(arr[in-1]>=3){
//                cout<<in<<"\n";
//                br = true;
//                break;
//            }
//        }
//        if(!br){
//            cout<<-1<<"\n";
//        }
