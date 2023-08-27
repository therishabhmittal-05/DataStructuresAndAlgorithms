#include <bits/stdc++.h> 
#include <iostream>
using namespace std;
void quadrantCheck(float x, float y){
    if (x > 0 && y > 0){
        cout << "1st Quadrant\n"; 
    }
    else if (x < 0 && y > 0){
        cout << "2nd Quadrant\n"; 
    }
    else  if (x < 0 && y < 0){
        cout << "3rd Quadrant\n"; 
    }
    else if (x > 0 && y < 0){
        cout << "4th Quadrant\n"; 
    }
    else if (x==0 && y == 0){
        cout << "Origin\n";
    }
    else if (x == 0){
        cout << "y axis\n";
    }
    else if (y == 0){
        cout << "x axis\n ";
    }
    
}
int main() {
    float x, y;
    cin >> x >> y;
    quadrantCheck(x, y) ;

    return 0;
}