#include <bits/stdc++.h>
using namespace std;
double W(vector<double> num, int n, double x) {
  double sum = 0;
  for (int i = n-1; i >= 0; i--)
  {
    double aC = num[n - i - 1];
    double xC = pow(x, i+1);
    // cout << x << "^" << i+1 << " = " << xC << endl;
    double denom = (i + 1);
    double c = aC *  xC / denom; // ax^(n+1)/(n+1)
    // cout << aC << "*" << xC << "/" << denom << " = " << c << endl;
    // cerr << "c " << num[n-i-1]<< endl;
    sum += c;
  }
  return sum;
}
int main() {
  int n, m;
  cin >> n >> m;
  vector<double> numbers;
  for(int i = 0; i < n; i++) {
    double tmp; cin >> tmp;
    numbers.push_back(tmp);
  }
  for(int i = 0; i < m; i++) {
    double r1, r2; cin >> r1 >> r2;
    // cout << W(numbers, n, 1) << endl;
    double w1 = W(numbers, n,  r1);
    double w2 = W(numbers, n,  r2);
    cout << setprecision(3) << fixed;
    // cout << r1 << "///" << r2 << endl;
    // cout << w1 << "///" << w2 << endl;
    cout << (double)(w2-w1) << endl;

  }


  return 0;
}
