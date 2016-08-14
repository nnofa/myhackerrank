#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
  vector<int> val;
  for(int i = 0; i < 4; i++){
    int temp;
    cin >> temp;
    val.push_back(temp);
  }
  int ret = 0; 
  sort(val.begin(), val.end());
  int cnt = 0;
  for(int i = 1; i <= val[0]; i++){
    for(int j = i; j <= val[1]; j++){
      for(int k = j; k<= val[2]; k++){
        for(int l = k; l <= val[3]; l++){
          cout << ++cnt << ". " << i << " " << j << " " << k << " " << l << endl;
          if((i ^ j ^ k ^l) > 0) ret++;
        }
      }
    }
  }
  cout << ret << endl;
  return 0;
}
