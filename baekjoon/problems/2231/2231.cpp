#include <bits/stdc++.h>

using namespace std;

int n,ret;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin>>n;
    for(int i=1;i<n;i++){
		int sum=0;
		int num=i;
		while(num!=0){
			sum+=num%10;
			num/=10;
		}
		if (sum+i==n) {
			ret=i;
			break;
		}
	}
    cout<<ret;
}
