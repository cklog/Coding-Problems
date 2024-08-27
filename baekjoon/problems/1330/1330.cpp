#include <iostream>
#include <string>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    string c=(a>b)?">":((a<b)?"<":"==");
    cout<<c;
    return 0;
}
