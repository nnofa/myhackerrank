#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
  /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
  int n;
  cin >> n;
  vector<int> v(n);
  for(int i = 0; i < n; i++){
    cin >> v[i];
  }

  sort(v.begin(), v.end());
  int ret = 0;
  int currMax = -1;
  for(int i = 0; i < n; i++){
    if(v[i] > currMax){
      currMax = v[i] + 4;
      ret++;
    }
  }
  cout << ret << endl;
  return 0;
}

