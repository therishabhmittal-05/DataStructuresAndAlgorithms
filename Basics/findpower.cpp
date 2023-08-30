#include <bits/stdc++.h> 
#include <iostream>
using namespace std;
int power(int x, int n){
    int power = 1;
    if (x== 0 && n == 0){
        return 1;
    }
    else if (n==0){
        return 1;
    }
    else {
    for (int i = 1; i<=n; i++){
        power = power * x;
    }
    return power;
    }
}

int main() {
    int x,n;
    cin >> x >> n;
    if ((x>= 0 && x<=8 ) && (n>=0 && n <= 9)){
        cout << power(x,n);
    }

    return 0;
}