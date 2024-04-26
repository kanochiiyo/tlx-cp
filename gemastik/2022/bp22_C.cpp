#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, sum = 0, counter = 0, x, y;
  cin >> n;
  int v[n];
  for (int i = 0; i < n; i++)
  {
    cin >> v[i];
    sum += v[i];
  }

  int avg = sum / n; // avg tiap gelas brp ml

  for (int i = 0; i < n; i++) // untuk ngecek apakah tiap gelas volumenya memenuhi nilai avg
  {
    if (v[i] > avg) // kalo lebih dari avg (berarti perlu dituang dari gelas x ke gelas ..)
    {
      x = i + 1; // dituang dari gelas (knp ada tmbah 1? index mulai dr 0)
    }
    else if (v[i] == avg) // kalo udah pas sama avg, kita counter dia, kalo counternya == 3 brrti dia tiap gelas isinya sama
    {
      counter++;
    }
    else // kalo ternyata dia lebih dikit dr avg brrti dia butuh dari gelas x gelas y
    {
      y = i + 1;
    }
  }

  if (counter == n) // jumlah gelas yang vol nya sama == banyak gelas brrti komposisi tiap gelas udh pas
  {
    cout << "SESUAI" << endl;
  }
  else if (counter != n - 2)
  // jd syaratnya tuh harus ada 2 gelas yang volume nya sama (berarti counternya == 2), kalo counter 2 bearti dia cukup 1x pindah.
  {
    cout << "TIDAK SESUAI" << endl;
  }
  else
  {
    cout << v[x - 1] - avg << " " << x << " " << y; // cek berapa ml yang harus dipindah dari gelas ke x-1 (index lg index lg), dari gelas .. , ke gelas ..
  }
}
