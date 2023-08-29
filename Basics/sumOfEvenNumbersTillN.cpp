
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int sum = 0;
    for (int i= 0; i<= n; i++){
        if(i%2!=0){
            continue;
        }
        else {
            sum = sum + i;
        }
    }
    cout << sum ;
    return 0;
}