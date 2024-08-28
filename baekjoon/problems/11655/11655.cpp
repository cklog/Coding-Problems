#include <bits/stdc++.h>

using namespace std;

string s;
    
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    getline(cin,s);
    for(int i=0;i<s.length();i++){
        if(s[i]>='A'&&s[i]<='Z'){
            if(s[i]+13>'Z') s[i]-=13;
            else s[i]+=13;
        }else if(s[i]>='a'&&s[i]<='z'){
             if(s[i]+13>'z') s[i]-=13;
            else s[i]+=13;
        }
        cout<<s[i];
    }
}
