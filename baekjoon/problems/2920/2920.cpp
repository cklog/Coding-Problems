#include <bits/stdc++.h>

using namespace std;

int a[8];
int b[8]={1,2,3,4,5,6,7,8};
int c[8]={8,7,6,5,4,3,2,1};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    for(int i=0;i<8;i++) cin>>a[i];
    if(equal(a,a+8,b)){
        cout<<"ascending";
    }else if(equal(a,a+8,c)){
        cout<<"descending";
    }else{
        cout<<"mixed";
    }
}
