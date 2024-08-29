#include <bits/stdc++.h>

using namespace std;

int t,ret,result;
string s;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin>>t;
    while(t--){
        result=0;
        ret=0;
        cin>>s;
        for(char c:s){
            if(c=='O'){
                ret++;  
            }else{
                ret=0;
            }
            result+=ret;
        }
        cout<<result<<'\n';
    }
}
