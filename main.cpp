#include <iostream>
using std::cout;
using std::endl;

long long factorial(int n) {
  if(n == 0) return 1;
  else return n*factorial(n-1);
}

int main() {
  for (int i = 0; i <= 20; i++) {
    cout << "!" << i << " = " << factorial(i) << endl;
  }
}