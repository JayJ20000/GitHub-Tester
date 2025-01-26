#include <iostream>

using namespace std;

  int sum(int n){
      int total = 0;
    for(int i = 1; i <= n; i++){
        total+=i;
    }
    return total;
  }


int main() {
  int n;
  
  cout << "Enter a number: ";
  cin >> n;
  
  cout << "The sum of the numbers up to n are: " << sum(n) << "\n";
 }
