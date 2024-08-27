#include <bits/stdc++.h>

using namespace std;

int main() {
    int n,result;
    string number;
    cin>>n;
    cin>>number;
    result=0;
    for(int i=0;i<n;i++){
        result+=number[i]-'0';
    }
    cout<<result;
}
