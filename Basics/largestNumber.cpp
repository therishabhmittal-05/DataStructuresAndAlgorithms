#include <bits/stdc++.h> 
#include <iostream>
using namespace std;
int largestNumber(int a, int b, int c){
    if (a>b && a>c){
        return a;
    }
    if (b>a && b>c){
        return b;
    }
    else {
        return c;
    }
}
int main() {
    int a, b, c;
    cin >> a >> b >> c;
    cout << largestNumber(a,b,c);
    return 0;
}