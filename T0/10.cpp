#include <iostream>
using namespace std;
int main() {
  int x, counter, i;
  counter = 0;
  cin >> x;
  int sum = 0;
  for(int i = x; i > 0 ; i/=10) {
     sum += i%10;
  }
  cout << sum;
}
