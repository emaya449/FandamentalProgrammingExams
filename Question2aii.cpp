#include <iostream>
using namespace std;

int main() {
  string letters[2][4] = { //This statement accesses the value of the element in the first row (0) and third column (2) of the letters array
    { "A", "B", "C", "D" },
    { "E", "F", "G", "H" }
  };
  
  cout << letters[0][2];// Outputs "C"
  return 0;
}
