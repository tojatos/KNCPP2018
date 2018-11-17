#include <bits/stdc++.h>
using namespace std;
void merge(int* arr, int l, int m, int r)
{
  int Llen = m-l +1;
  int Rlen = r - m;
  int L[Llen], R[Rlen];
  for (int i = 0; i < Llen; i++) L[i] = arr[l+i];
  for (int i = 0; i < Rlen; i++) R[i] = arr[m+i+1];
  int i = 0, j = 0, k=l;
  while(i < Llen && j<Rlen) {
    if(L[i] <= R[j]) {
      arr[k] = L[i];
      i++;
    } else {
      arr[k] = R[j];
      j++;
    }
    k++;
  }
  while (i < Llen)
    {
        arr[k] = L[i];
        i++;
        k++;
    }
    while (j < Rlen)
    {
        arr[k] = R[j];
        j++;
        k++;
    }

}
void merge_sort(int* arr, int l, int r) {
  if(r>l) {
    int m = (l+r)/2;
    merge_sort(arr, l, m);
    merge_sort(arr, m + 1, r);
    merge(arr, l, m, r);
  }
}
int main() {
  cout.sync_with_stdio(false);
  int n;
  cin >> n;
  int tab[n];
  for (int i = 0; i < n; i++) cin >> tab[i];
  merge_sort(tab, 0, n-1);
  for (int i = 0; i < n; i++) cout << tab[i] << ' ';
  return 0;
}
