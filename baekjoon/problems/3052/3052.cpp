#include <bits/stdc++.h>

using namespace std;

int mods[42];
int a,result;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    for(int i=0;i<10;i++){
        cin>>a;
        mods[a%42]++;
    }
    for(int i:mods){
        if(i) result++;
    }
    cout<<result;
}
