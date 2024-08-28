#include <bits/stdc++.h>

using namespace std;

int n,ret;
string s;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin>>n;
    while(n--){
        cin>>s;
        stack<char> st;
        for(char a:s){
            if(st.size()&&st.top()==a) st.pop();
            else st.push(a);
        }
        if(!st.size()) ret++;
    }
    cout<<ret;
}
