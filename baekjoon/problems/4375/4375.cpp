#include <bits/stdc++.h>

using namespace std;

int n;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    while(cin>>n){
        long long ret=1;
        long long temp=1;
        while(1){
            if(temp%n==0){
                cout<<ret<<'\n';
                break;
            }else{
                temp=(10*temp+1)%n;
                ret++;
            }
        }
    }
}
