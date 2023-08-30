#include <iostream>
using namespace std;
int factorial(int n){
    int factorial = 1;
    if (n==1 || n==0){
        return 1;
    }
    
    else {
    for (int i = 1; i <= n; i++ ){
        factorial = factorial * i;
    }
    return factorial;
    }
}
int main() {
    int n;
    cin >> n;
    if (n >= -10 && n <= 12){
        if (n<0){
            cout << "Error\n";
        }
        else 
        cout << factorial(n);
    }
    return 0;
}