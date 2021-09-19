#include <iostream> 
#include <vector>
using namespace std;
int main() {
  uint64_t n, sum = 0; 
  cin>>n;
  vector<int> v(n); 
  for(auto i = 0; i < n - 1; ++i) {
    cin>>v[i];
    sum += v[i];
  }
  cout << (n*n + n)/2 - sum;
  return 0;
}
