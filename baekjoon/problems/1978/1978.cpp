#include <bits/stdc++.h>

using namespace std;

int n,a,ret;
int num[1001];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    for(int i=2;i<=1000;i++) num[i]=i;
    for(int i=2;i<=1000;i++) {
        if(num[i]==0) continue;
        for(int j=2*i;j<=1000;j+=i) {
            num[j]=0;
        }
    }
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a;
        if(num[a]) ret++;
    }
    cout<<ret;
}
