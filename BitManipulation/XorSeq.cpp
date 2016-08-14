#include <vector>
#include <iostream>

using namespace std;

long long int getRes(long long int val){
  //if(val == 0) return 0;
  //if(val == 1) return 1;
  if(val % 8 == 2 || val % 8 == 3) return 2;
  if(val % 8 == 6 || val % 8 == 7) return 0;
  
  long long int k = val / 8;
  if(val % 8 == 0 || val % 8 == 1){
    return 8*k + (val%8);
  }

  if(val % 8 == 4 || val % 8 == 5){
    return 8*k + (val%8) + 2;
  }
}
int main(){
  int Q;
  cin >> Q;
  for(int xx = 0; xx < Q; xx++){
    long long int L,R;
    cin >> L >> R;

    long long int res = getRes(R) ^ getRes(L-1);
    cout << res << endl;
  }

  return 0;
}
