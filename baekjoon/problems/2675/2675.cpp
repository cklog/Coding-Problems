#include <bits/stdc++.h>

using namespace std;

int t,a;
string s;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin>>t;
    while(t--){
        cin>>a>>s;
        for(char c:s){
            for(int i=0;i<a;i++) cout<<c;
        }
        cout<<'\n';
    }
}
