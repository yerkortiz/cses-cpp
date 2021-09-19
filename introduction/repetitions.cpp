#include <iostream>
#include <string>
using namespace std;
int main(){
  string dna_seq; 
  cin >> dna_seq;
  auto max_repetitions = 1, 
       cont_repetitions = 1;
  for(auto x = dna_seq.begin() + 1; x < dna_seq.end(); ++x) {
    if (*x == *(x - 1)){
      ++cont_repetitions;
    } else {
      max_repetitions = max(max_repetitions, cont_repetitions);
      cont_repetitions = 1;
    }
  }
  cout<<max(max_repetitions, cont_repetitions);
  return 0;
}
