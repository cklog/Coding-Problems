#include <bits/stdc++.h>

using namespace std;

int main() {
    int a,b,c;
    string aa,bb,cc;
    cin>>a>>b>>c;
    cout<<a+b-c<<'\n';
    aa=to_string(a);
    bb=to_string(b);
    cc=aa+bb;
    cout<<stoi(cc)-c;
}
