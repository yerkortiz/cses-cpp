#include <iostream> 
using namespace std;
#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int main() {
  FAST_IO;
  uint64_t t; 
  cin >> t;
  int64_t row, column, max_coordinate, delta_coordinate, diagonal;
  for(auto i = 0; i < t; ++i) {
    cin >> row >> column;
    max_coordinate = max(--row, --column);
    delta_coordinate = labs(row - column);
    diagonal = max_coordinate * max_coordinate + max_coordinate + 1;
    if ((max_coordinate & 1 and row >= column) 
        or (not (max_coordinate & 1) and row <= column))
      cout<<delta_coordinate + diagonal<<'\n';
    else
      cout<<diagonal - delta_coordinate<<'\n';
  }
  return 0;
}
