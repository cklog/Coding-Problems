#include <bits/stdc++.h>

using namespace std;

int n,k,a,temp,result;
int psum[100001];
    
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin>>n>>k;
    result=-10000000;
    for(int i=1;i<=n;i++){
        cin>>a;
        psum[i]=psum[i-1]+a;
    }
    for(int i=k;i<=n;i++){
        result=max(result,psum[i]-psum[i-k]);
    }
    cout<<result;
}
