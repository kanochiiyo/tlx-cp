#include <iostream>
using namespace std;

int main()
{
  long long a, b, c, d;
  cin >> a >> b >> c >> d;

  string s = (a * d < b * c) ? "lebih kecil" : (a * d > b * c) ? "lebih besar"
                                                               : "sama";
  cout << s << endl;
}