#include <bits/stdc++.h>

using namespace std;

int main() {
    vector<int> v(9);
    int maxn=0,pos;
    for(int i=0;i<9;i++){
        cin>>v[i];
        if(v[i]>maxn){
            maxn=v[i];
            pos=i+1;
        }
    }
    cout<<maxn<<'\n'<<pos;
}
