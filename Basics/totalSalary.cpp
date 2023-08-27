#include <bits/stdc++.h> 
#include <iostream>
#include <cmath>
using namespace std;
int totalSalary(int basic, char grade){
   
    float hra = 0.2 * basic;
    float da = 0.5 * basic;
    float pf = 0.11 * basic;
    int allow;
    if (grade == 'A'){
        allow = 1700;
    }
    else if (grade == 'B'){
        allow = 1500;
    }
    else  {
        allow = 1300;
    }
    float totalSalary = basic + hra + da + allow - pf;
    return round (totalSalary);
}
int main() {
    int basic;
    char grade;
    cin >> basic >> grade;
    cout << totalSalary(basic, grade);

    return 0;
}