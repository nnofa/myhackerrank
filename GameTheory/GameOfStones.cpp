#include <vector>
#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main(){
  int xx;
  cin >> xx;
  bool winFirst[101];
  winFirst[0] = false;
  winFirst[1] = false;
  winFirst[2] = true;
  winFirst[3] = true;
  winFirst[4] = true;
  winFirst[5] = true;
  for(int i = 6; i <= 100; i++){
    winFirst[i] = !(winFirst[i-2]&&winFirst[i-3]&&winFirst[i-5]);
  }

  for(int i =0;i <xx; i++){
    int input;
    cin >> input;
    if(winFirst[input]){
      cout << "First" << endl;
    } else{
      cout << "Second" << endl;
    }
  }
  return 0;
}
