#include <bits/stdc++.h>

using namespace std;

string s;
int result;
    
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin>>s;
    result=1;
    for(int i=0;i<s.length()/2;i++){
        if(s[i]!=s[s.length()-1-i]){
            result=0;
            break;
        }
    }
    cout<<result;
}
