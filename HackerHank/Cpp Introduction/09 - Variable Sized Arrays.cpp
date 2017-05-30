#include <iostream>
#include <cstdio>
#include <vector>

using namespace std;

int main(){

  int n,q;

  cin >> n >> q;

vector<vector<int>> a(n);

for (int i = 0; i < n; i++){

  int elements;
  cin >> elements;

  for(int j = 0; j < elements; j++){
    int val;
    cin >> val;
    a[i].push_back(val);
  }
}

for(int k = 0; k < q; k++){
  int i,j;
  cin >> i >> j;

  cout << a[i][j] << endl;
}




  return 0;
}
