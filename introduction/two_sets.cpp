#include <iostream>
#include <unordered_set>
using namespace std;
int main(){
  ios_base::sync_with_stdio(0);
  uint64_t n; cin >> n;
  auto s = (n + 1) * n / 2;
  if (s & 1) {
    cout<<"NO";
    return 0;
  }
  unordered_set<uint64_t> set_a, set_b;
  for(auto i = 1; i <= n; ++i) {
    set_a.insert(i);
  }
  cout<<"YES\n";
  s = (s>>1);
  for(auto i = n; i > 0; --i){
    if (i <= s) {
      set_a.erase(i);
      set_b.insert(i);
      s -= i;
    }
  }
  cout<<set_b.size()<<'\n';
  for (const auto& elem: set_b) 
    cout<<elem<<' ';  
  cout<<'\n';
  cout<<set_a.size()<<'\n';
  for (const auto& elem: set_a) 
    cout<<elem<<' ';  
  
  return 0;
}