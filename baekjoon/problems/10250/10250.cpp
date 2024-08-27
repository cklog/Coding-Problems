#include <bits/stdc++.h>

using namespace std;

int main() {
    int t,h,w,n,height,width;
    cin>>t;
    while(t--){
        cin>>h>>w>>n;
        width=n/h+1;
        height=n%h;
        if(height==0){
            height=h;
            width--;
        }
        if(width<10){
            cout<<height<<"0"<<width<<'\n';
        }else{
            cout<<height<<width<<'\n';
        }
    }
}
