#include <iostream>
#include <cmath>
#include <cctype>
using namespace std;

int main(){
    int maximum = max(144,22);
    int minimum = min(144, 22);
    double root = sqrt(176);
    int power = pow (2,10);
    string name = "hello World";
    int length = name.length();
   /* string uppercase;
    for (int i = 0; i< name.length(); i++){
    string upperCase =  toupper(name[i]);   
    }*/
    cout << maximum << " "<< minimum << " "<< root << " "<< power << " "<<name; 
 


}