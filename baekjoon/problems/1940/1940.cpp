#include <bits/stdc++.h>

using namespace std;

int n,m,a,ret;
vector<int> v;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin>>n>>m;
    for(int i=0;i<n;i++){
        cin>>a;
        v.push_back(a);
    }
    ret=0;
    if(m<=200000){
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(v[i]+v[j]==m) ret++;
            }
        }
    }
    cout<<ret;
}
