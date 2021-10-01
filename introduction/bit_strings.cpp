#include <iostream>
using namespace std;
int main() {
  uint64_t x = (1e9 + 7); 
  uint64_t n;
  cin >> n;
  uint64_t current = 1;
  for(auto i = 0; i < n; ++i) {
    current <<= 1;
    current %= x;
  }
  cout<<current;
  return 0;
}