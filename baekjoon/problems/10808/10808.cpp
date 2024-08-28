#include <bits/stdc++.h>

using namespace std;

int a[26];
    
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s;
    cin>>s;
    for(int i=0;i<s.length();i++){
        a[s[i]-'a']++;
    }
    for(int i:a) cout<<i<<" ";
}
