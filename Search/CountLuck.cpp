#include <vector>
#include <iostream>

using namespace std;

bool goBackTrack(vector<string>&v, int i, int j,int from, int& res){
  //from: 0 up, 1 right, 2 down, 3 left
  int bt=0;
  if(v[i][j] == '*') return true;
  bool found = false;
  
  if(from != 0 && i > 0 && v[i-1][j] != 'X'){
    bt++;
    found = found || goBackTrack(v,i-1,j,2,res);
  }

  if(from != 2 && i < v.size()-1 && v[i+1][j] !='X'){
    bt++;
    found = found ||  goBackTrack(v,i+1,j,0,res);
  }

  if(from != 3 && j>0 && v[i][j-1] != 'X'){
    bt++;
    found = found || goBackTrack(v,i,j-1,1,res);
  }

  if(from != 1 && j< v[0].size() -1 && v[i][j+1] !='X'){
    bt++;
    found = found || goBackTrack(v,i,j+1,3,res);
  }
  
  if(found && bt > 1) res++;
  return found;
}
int goBackTrack(vector<string>& v, int i, int j){
  int bt = 0;
  int res = 0;
  if(i > 0 && v[i-1][j] != 'X'){
    bt++;
    goBackTrack(v,i-1,j,2,res);
  }

  if(i < v.size()-1 && v[i+1][j] !='X'){
    bt++;
    goBackTrack(v,i+1,j,0,res);
  }

  if(j>0 && v[i][j-1] != 'X'){
    bt++;
    goBackTrack(v,i,j-1,1,res);
  }

  if(j< v[0].size() -1 && v[i][j+1] !='X'){
    bt++;
    goBackTrack(v,i,j+1,3,res);
  }

  if(bt > 1) res++;

  return res;
}

int main(){
  int zz;
  cin >> zz;
  for(int xx = 0; xx < zz; xx++){
    int r, c;
    cin >> r >> c;
    vector<string> v;
    for(int i = 0; i < r; i++){
      string s;
      cin >> s;
      v.push_back(s);
    }
    int k; cin >> k;
    int bt = -1;
    for(int i = 0; i < r; i++){
      bool br = false;
      for(int j = 0; j < c; j++){
        if(v[i][j] == 'M'){
          bt = goBackTrack(v,i,j); 
          break;
        }
      }
      if(bt!=-1) break;
    }
    
    if(bt == k){
      cout << "Impressed" << endl;
    } else{
      cout << "Oops!" << endl;
    }
  }
  return 0;
}
