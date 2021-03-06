// http://codeforces.com/contest/766/problem/A

#include <bits/stdc++.h>

using namespace std;

#define debug(x) cout << #x " = " << (x) << endl

int main() {
#ifndef LOCAL
#define endl '\n'
  ios_base::sync_with_stdio(false);cin.tie(NULL);
#endif

  string a, b;
  cin >> a >> b;
  if (a == b)
    cout << -1 << endl;
  else
    cout << max(a.size(), b.size()) << endl;

  return 0;
}
