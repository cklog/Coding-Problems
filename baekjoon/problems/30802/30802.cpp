#include <bits/stdc++.h>

using namespace std;

int n,t,p,ret;
int s[6];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin>>n;
    for(int i=0;i<6;i++) cin>>s[i];
    cin>>t>>p;
    for(int i=0;i<6;i++){
        ret+=(s[i]/t+(s[i]%t>0));
    }
    cout<<ret<<'\n'<<n/p<<' '<<n%p<<'\n';
}
