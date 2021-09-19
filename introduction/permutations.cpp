#include <iostream> 
using namespace std;
int main() {
  int n;
  cin >> n;
  if (n == 2 or n == 3) cout<<"NO SOLUTION";
  else {
    for(auto i = 2; i <= n; i += 2) cout<<i<<' ';
    for(auto i = 1; i <= n; i += 2) cout<<i<<' ';
  }
  return 0;
}
