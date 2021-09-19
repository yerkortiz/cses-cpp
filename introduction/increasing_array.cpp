#include <iostream> 
#include <vector>
using namespace std;
int main(){
  int n; 
  cin>>n;
  auto numbers = vector<int>(n);
  cin>>numbers[0];
  uint_fast64_t increasing_sum = 0;
  for(auto i = 1; i < n; ++i){
    cin>>numbers[i];
    if (numbers[i] < numbers[i - 1]) {
      increasing_sum += numbers[i - 1] - numbers[i];
      numbers[i] += numbers[i - 1] - numbers[i];
    } 
  }
  cout<<increasing_sum;
  return 0;
}
