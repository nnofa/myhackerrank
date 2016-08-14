#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
  int n,k;
  cin >> n >> k;
  priority_queue<int> pq;
  int lb = 0;
  for(int i = 0; i < n;i++){
    int luck;
    bool important;
    cin >> luck >> important;
    if(important){
      pq.push(luck);
    } else{
      lb+=luck;
    } 
  }

  for(int i = 0; i < k; i++){
    if(pq.empty()) break;
    lb += pq.top();
    pq.pop();
  }

  while(!pq.empty()){
    lb -= pq.top();
    pq.pop();
  }
  cout << lb << endl;
  return 0;
}
