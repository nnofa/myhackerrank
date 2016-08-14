#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

const int NMAX = (int) 2e6 + 1;
const int RMAX = (int) 1e6 + 1;
const int MOD = 1e9 + 7;
int c[NMAX][RMAX];
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    for(int i = 1; i < NMAX; i++){
        c[i][0] = 1;
    }
    
    for(int i = 1; i < NMAX; i++){
        for(int j = 1; j < RMAX && j < i; j++){
            c[i][j] = (c[i-1][j] + c[i-1][j-1] ) % MOD;
        }
    }
    
    int t;
    cin >> t;
    for(int i = 0; i < t; i++){
        int m,n;
        cin >> m >> n;
        m--; n--;
        int k = m+n;
        cout << c[k][min(m,n)] << endl;
    }
    return 0;
}

