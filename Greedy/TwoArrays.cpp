#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
  int T;
  cin >> T;
  for(int xx=0; xx < T; xx++){
    int n,k;
    cin >> n >> k;
    priority_queue<int, vector<int>, greater<int>> pq1;
    priority_queue<int, vector<int>> pq2;

    for(int i = 0; i < n; i++){
      int input;
      cin >> input;
      pq1.push(input);
    }

    for(int i = 0; i < n; i++){
      int input;
      cin >> input;
      pq2.push(input);
    }
    
    bool yes = true;
    for(int i = 0; i < n; i++){
      int a,b;
      a = pq1.top(); pq1.pop();
      b = pq2.top(); pq2.pop();
      if(a+b < k){
        yes = false;
        break;
      }
    }

    if(yes){
      cout << "YES" << endl;
    } else{
      cout << "NO" << endl;
    }

  }
  return 0;
}

