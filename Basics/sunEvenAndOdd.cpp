#include <iostream>
using namespace std;

int main() {
   int N;
   cin >> N; 
   int sumEven = 0;
   int sumOdd = 0;
   for (int i=0; N!=0 ; i++){
       int x = N%10;
       if (x%2 == 0){
           sumEven = sumEven + x;
           }
       
        else {
                sumOdd = sumOdd + x;
            }
        N = N/10;
       }
    cout << sumEven << "\t" << sumOdd;
   
    return 0;
}