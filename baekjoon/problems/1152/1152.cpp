#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    int result=0;
    getline(cin, s);
    for(int i=0;i<s.size();i++){
        if(s.size()==1&&s[i]==' ') result--;
        if(s[i]==' '){
            if(i==0||i==s.size()-1) continue;
            result++;
        }
    }
    cout<<++result;
}
