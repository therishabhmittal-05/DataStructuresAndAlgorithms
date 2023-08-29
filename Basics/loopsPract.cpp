/*#include <iostream>
#include <algorithm>
using namespace std;
int main() {
   for (int i = 0; i<=10; i++){
        cout<< i << " " ;
    }
*/
/*int i = 15;
for (;;){
    cout << i << " ";
}
for_each();
}*/
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
void fahrenheitToCelsius(int s, int e, int w)
{
 
    for (int f = s; f <= e; f = f + w)
    {
        int celsius = ((f - 32) * 5 / 9);
        cout << f << " " << celsius << endl;
    }
}

int main()
{
    int s, e, w;
    cin >> s >> e >> w;
    if ((s >= 0 && s <= 80) && (e >= s && e <= 900) && (w >= 0 && w <= 40))
    {
        fahrenheitToCelsius(s, w, e);
    }

    return 0;
}
