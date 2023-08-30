#include <iostream>
using namespace std;

void fahrenheitToCelsius(int s, int e, int w) {
    for (int f = s; f <= e; f += w) {
        int celsius = ((f - 32) * 5 / 9);
        cout << f << "\t" << celsius << endl;
    }
}

int main() {
    int s, e, w;
    cin >> s >> e >> w;
    if ((s >= 0 && s <= 80) && (e >= s && e <= 900) && (w >= 0 && w <= 40)) {
        fahrenheitToCelsius(s, e, w);
    }

    return 0;
}
