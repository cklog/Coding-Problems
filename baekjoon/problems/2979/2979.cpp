#include <bits/stdc++.h>

using namespace std;

int a,b,c,arrive,leave,answer;
int times[101];
    
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin>>a>>b>>c;
    answer=0;
    for(int i=0;i<3;i++){
        cin>>arrive>>leave;
        for(int j=arrive;j<leave;j++){
            times[j]++;
        }
    }
    for(int i=1;i<101;i++){
        if(times[i]==1) answer+=a;
        else if(times[i]==2) answer+=2*b;
        else if(times[i]==3) answer+=3*c;
    }
    cout<<answer;
}
