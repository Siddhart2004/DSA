#include<iostream>
using namespace std;

int get_modulo(int n, int d) {
    return n & (d - 1);
}        
int main() {
  int n = 6, d = 4;
  cout << get_modulo(n, d);
  return 0;
}
