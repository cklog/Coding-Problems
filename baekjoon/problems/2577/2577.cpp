#include <bits/stdc++.h>

using namespace std;

int a,b,c,d;
int num[10];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin>>a>>b>>c;
    d=a*b*c;
    while(d>0){
        num[d%10]++;
        d/=10;
    }
    for(int i:num) cout<<i<<'\n';
}
