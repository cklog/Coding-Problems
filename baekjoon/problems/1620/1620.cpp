#include <bits/stdc++.h>

using namespace std;

int n,m,a;
string s;
map<int,string> poke1;
map<string,int> poke2;
    
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        cin>>s;
        poke1.insert(make_pair(i,s));
        poke2.insert(make_pair(s,i));
    }
    for(int i=0;i<m;i++){
        cin>>s;
        if(atoi(s.c_str())){
            cout<<poke1[atoi(s.c_str())];
        }else{
            cout<<poke2[s];
        }
        cout<<'\n';
    }
}
