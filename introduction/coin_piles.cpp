#include <iostream>
using namespace std;
typedef long long long_t;
int main() {
    long_t t; cin >> t;
    for(; t > 0; --t) {
        long_t a, b; cin >> a >> b;
        if((2 * a - b) % 3 == 0 && (2 * a - b) >= 0 && (2*b - a) % 3 == 0 && (2*b - a) >= 0) {
            cout<<"YES\n";
        } else {
            cout<<"NO\n";
        }
    }
    return 0;
}