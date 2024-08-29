#include <bits/stdc++.h>

using namespace std;

int alpha[26];
string s;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    for(int i=0;i<26;i++){
        alpha[i]=-1;
    }
    cin>>s;
    for(int i=0;i<s.length();i++){
        int pos=s[i]-'a';
        if(alpha[pos]==-1){
            alpha[pos]=i;
        }
    }
    for(int i:alpha) cout<<i<<" ";
}
