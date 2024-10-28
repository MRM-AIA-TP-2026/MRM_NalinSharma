#include <iostream>
using namespace std;

int main() {
  // Outer loop to control the numbers from 1 to 5
  for (int i = 1; i <= 5; i++) {
    // Inner loop to print dots (decreasing as i increases)
    for (int j = 5; j > i; j--) {
      cout << ".";
    }
    // Print the number after the dots
    cout << i << endl;
  }

  return 0;
}
