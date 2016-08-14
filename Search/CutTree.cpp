#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

typedef vector<vector<int>> vvi;
int dfs(vvi& vv,vector<int>& v, vector<bool>& vbool, int currNode, int &mini, int& sum){
  if(vbool[currNode]) return 0;
  
  vbool[currNode] = true;
  
  int ret = 0;
  for(int i = 0;i < vv[currNode].size(); i++){
    int nextNode = vv[currNode][i];
    if(vbool[nextNode]) continue;

    int temp = dfs(vv, v, vbool, nextNode, mini, sum);
    mini = min(abs(sum-(2*temp)), mini);

    ret+= temp;
  }
  ret += v[currNode];
  return ret;
}
int main(){
  int n;
  cin >> n;
  vector<int> v;
  vvi vv(n, vector<int>(3));
  int sum = 0;
  for(int i = 0; i < n; i++){
    int val;
    cin >> val;
    sum+= val;
    v.push_back(val);  
  }

  for(int i = 0; i < n-1;i++){
    int a,b;
    cin >> a >> b;
    vv[a-1].push_back(b-1);
    vv[b-1].push_back(a-1);
  }
  
  vector<bool> vbool(n,false);
  int mini = (int) 1e9;  
  dfs(vv, v, vbool, 0, mini, sum);
  cout << mini << endl;
  return 0;
}

