#include <iostream>
#include <cmath>
using namespace std;

int main() {
  double c, a, r, d, s;
  double pi;

  pi = 3.14;

  cout << "Care este raza cercului? ";
  cin >> r;

  d = 2 * r;
  c = 2 * pi *r;
  a = (pi * d * d)/4;

  cout << "Circumferinta cercului lui Shirin este: " << c << endl;
  cout << "Aria cercului pentru Shirin este: " << a << endl;

  return 0;
  
  
}