#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <set>
using namespace std;

typedef long long ll;
int main() {
  /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
  int q;
  cin >> q;
  for(int xx = 0; xx < q; xx++){
    int n;
    ll m;
    cin >> n >> m;
    set<ll> myset;
    ll subArraySum = 0;
    ll ret = 0;
    for(int i = 0; i < n; i++){
      ll input;
      cin >> input;
      subArraySum += input;
      subArraySum %= m;
      ret = max(ret, subArraySum);

      set<ll>::iterator it = myset.upper_bound(subArraySum);
      if(it != myset.end()){
        ret = max(ret, subArraySum - *it + m);
      }
      myset.insert(subArraySum);
    }

    cout << ret << endl;
  }
  return 0;
}

