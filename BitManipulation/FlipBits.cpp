#include <iostream>
#include <vector>

using namespace std;

int main(){
  int xx;
  cin >> xx;
  for(int zz = 0; zz < xx; zz++){
    unsigned int input;
    cin >> input;

    input = ~input;
    cout << input << endl;
  }
}
