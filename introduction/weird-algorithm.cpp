#include <iostream>
using namespace std;
int main() {
  long long n; cin >> n;
  while(n > 1) {
    cout<<n<<' ';
    if (n & 1) {
      n = 3 * n + 1;
    } else {
      n = n / 2;
    }
  }
  cout<<1;
  return 0;
}
