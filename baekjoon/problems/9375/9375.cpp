#include <bits/stdc++.h>

using namespace std;

int t,n;
string a,b;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin>>t;
    while(t--){
        cin>>n;
        map<string,int> m;
        for(int i=0;i<n;i++){
            cin>>a>>b;
            m[b]++;
        }
        long long result=1;
        for(auto i:m){
            result*=((long long)i.second+1);
        }
        result--;
        cout<<result<<'\n';
    }
}
